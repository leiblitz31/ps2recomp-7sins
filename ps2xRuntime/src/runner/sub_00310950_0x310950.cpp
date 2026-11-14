#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00310950
// Address: 0x310950 - 0x310a90
void sub_00310950_0x310950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00310950_0x310950");
#endif

    switch (ctx->pc) {
        case 0x310974u: goto label_310974;
        case 0x310990u: goto label_310990;
        case 0x3109a0u: goto label_3109a0;
        case 0x3109a8u: goto label_3109a8;
        case 0x3109c0u: goto label_3109c0;
        case 0x310a10u: goto label_310a10;
        case 0x310a20u: goto label_310a20;
        case 0x310a38u: goto label_310a38;
        case 0x310a50u: goto label_310a50;
        case 0x310a60u: goto label_310a60;
        case 0x310a78u: goto label_310a78;
        default: break;
    }

    ctx->pc = 0x310950u;

label_310950:
    // 0x310950: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x310950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x310954: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x310954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x310958: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x310958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31095c: 0x806222b8  lb          $v0, 0x22B8($v1)
    ctx->pc = 0x31095cu;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x4F22B8u));
    // 0x310960: 0x247022b8  addiu       $s0, $v1, 0x22B8
    ctx->pc = 0x310960u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 8888));
    // 0x310964: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x310964u;
    {
        const bool branch_taken_0x310964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310964u;
        // 0x310968: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310964) {
            ctx->pc = 0x310974u;
            goto label_310974;
        }
    }
    ctx->pc = 0x31096Cu;
    // 0x31096c: 0xc0c4238  jal         func_3108E0
    ctx->pc = 0x31096Cu;
    SET_GPR_U32(ctx, 31, 0x310974u);
    ctx->pc = 0x3108E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3108E0u, 0x31096Cu, 0x310974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310974u;
label_310974:
    // 0x310974: 0x82020004  lb          $v0, 0x4($s0)
    ctx->pc = 0x310974u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x310978: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x310978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31097c: 0x38420054  xori        $v0, $v0, 0x54
    ctx->pc = 0x31097cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)84);
    // 0x310980: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x310980u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x310984: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x310984u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x310988: 0x3e00008  jr          $ra
    ctx->pc = 0x310988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31098Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310988u;
        // 0x31098c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x310990u;
label_310990:
    // 0x310990: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x310990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x310994: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x310994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x310998: 0xc0bf704  jal         func_2FDC10
    ctx->pc = 0x310998u;
    SET_GPR_U32(ctx, 31, 0x3109A0u);
    ctx->pc = 0x31099Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310998u;
    // 0x31099c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDC10u, 0x310998u, 0x3109A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3109A0u;
label_3109a0:
    // 0x3109a0: 0xc0c4254  jal         func_310950
    ctx->pc = 0x3109A0u;
    SET_GPR_U32(ctx, 31, 0x3109A8u);
    ctx->pc = 0x310950u;
    goto label_310950;
    ctx->pc = 0x3109A8u;
label_3109a8:
    // 0x3109a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3109A8u;
    {
        const bool branch_taken_0x3109a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3109ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3109A8u;
        // 0x3109ac: 0x3c02004f  lui         $v0, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3109a8) {
            ctx->pc = 0x3109B8u;
            goto label_3109b8;
        }
    }
    ctx->pc = 0x3109B0u;
    // 0x3109b0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3109B0u;
    {
        const bool branch_taken_0x3109b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3109B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3109B0u;
        // 0x3109b4: 0x904222b4  lbu         $v0, 0x22B4($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8884)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3109b0) {
            ctx->pc = 0x3109E4u;
            goto label_3109e4;
        }
    }
    ctx->pc = 0x3109B8u;
label_3109b8:
    // 0x3109b8: 0xc0bf704  jal         func_2FDC10
    ctx->pc = 0x3109B8u;
    SET_GPR_U32(ctx, 31, 0x3109C0u);
    ctx->pc = 0x3109BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3109B8u;
    // 0x3109bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDC10u, 0x3109B8u, 0x3109C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3109C0u;
label_3109c0:
    // 0x3109c0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3109c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3109c4: 0x31342  srl         $v0, $v1, 13
    ctx->pc = 0x3109c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 13));
    // 0x3109c8: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x3109c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x3109cc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3109CCu;
    {
        const bool branch_taken_0x3109cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3109cc) {
            ctx->pc = 0x3109D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3109CCu;
            // 0x3109d0: 0x31402  srl         $v0, $v1, 16 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3109E0u;
            goto label_3109e0;
        }
    }
    ctx->pc = 0x3109D4u;
    // 0x3109d4: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x3109d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x3109d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3109D8u;
    {
        const bool branch_taken_0x3109d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3109DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3109D8u;
        // 0x3109dc: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3109d8) {
            ctx->pc = 0x3109E4u;
            goto label_3109e4;
        }
    }
    ctx->pc = 0x3109E0u;
label_3109e0:
    // 0x3109e0: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x3109e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_3109e4:
    // 0x3109e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3109e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3109e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3109E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3109ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3109E8u;
        // 0x3109ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3109E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3109F0u;
    // 0x3109f0: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x3109f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x3109f4: 0x244722b0  addiu       $a3, $v0, 0x22B0
    ctx->pc = 0x3109f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 8880));
    // 0x3109f8: 0x68830007  ldl         $v1, 0x7($a0)
    ctx->pc = 0x3109f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3109fc: 0x6c830000  ldr         $v1, 0x0($a0)
    ctx->pc = 0x3109fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x310a00: 0xb0e30007  sdl         $v1, 0x7($a3)
    ctx->pc = 0x310a00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x310a04: 0x3e00008  jr          $ra
    ctx->pc = 0x310A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310A04u;
        // 0x310a08: 0xb4e30000  sdr         $v1, 0x0($a3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x310A0Cu;
    // 0x310a0c: 0x0  nop
    ctx->pc = 0x310a0cu;
    // NOP
label_310a10:
    // 0x310a10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x310a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x310a14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x310a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x310a18: 0xc0c4254  jal         func_310950
    ctx->pc = 0x310A18u;
    SET_GPR_U32(ctx, 31, 0x310A20u);
    ctx->pc = 0x310950u;
    goto label_310950;
    ctx->pc = 0x310A20u;
label_310a20:
    // 0x310a20: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x310A20u;
    {
        const bool branch_taken_0x310a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310A20u;
        // 0x310a24: 0x3c03004f  lui         $v1, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310a20) {
            ctx->pc = 0x310A30u;
            goto label_310a30;
        }
    }
    ctx->pc = 0x310A28u;
    // 0x310a28: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x310A28u;
    {
        const bool branch_taken_0x310a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310A28u;
        // 0x310a2c: 0x906222b2  lbu         $v0, 0x22B2($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8882)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310a28) {
            ctx->pc = 0x310A44u;
            goto label_310a44;
        }
    }
    ctx->pc = 0x310A30u;
label_310a30:
    // 0x310a30: 0xc0bf704  jal         func_2FDC10
    ctx->pc = 0x310A30u;
    SET_GPR_U32(ctx, 31, 0x310A38u);
    ctx->pc = 0x310A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310A30u;
    // 0x310a34: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDC10u, 0x310A30u, 0x310A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310A38u;
label_310a38:
    // 0x310a38: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x310a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x310a3c: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x310a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x310a40: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x310a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_310a44:
    // 0x310a44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x310a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x310a48: 0x3e00008  jr          $ra
    ctx->pc = 0x310A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310A48u;
        // 0x310a4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x310A50u;
label_310a50:
    // 0x310a50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x310a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x310a54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x310a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x310a58: 0xc0c4254  jal         func_310950
    ctx->pc = 0x310A58u;
    SET_GPR_U32(ctx, 31, 0x310A60u);
    ctx->pc = 0x310950u;
    goto label_310950;
    ctx->pc = 0x310A60u;
label_310a60:
    // 0x310a60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x310A60u;
    {
        const bool branch_taken_0x310a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310A60u;
        // 0x310a64: 0x3c03004f  lui         $v1, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310a60) {
            ctx->pc = 0x310A70u;
            goto label_310a70;
        }
    }
    ctx->pc = 0x310A68u;
    // 0x310a68: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x310A68u;
    {
        const bool branch_taken_0x310a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310A68u;
        // 0x310a6c: 0x906222b5  lbu         $v0, 0x22B5($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8885)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310a68) {
            ctx->pc = 0x310A80u;
            goto label_310a80;
        }
    }
    ctx->pc = 0x310A70u;
label_310a70:
    // 0x310a70: 0xc0bf704  jal         func_2FDC10
    ctx->pc = 0x310A70u;
    SET_GPR_U32(ctx, 31, 0x310A78u);
    ctx->pc = 0x310A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310A70u;
    // 0x310a74: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDC10u, 0x310A70u, 0x310A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310A78u;
label_310a78:
    // 0x310a78: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x310a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x310a7c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x310a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_310a80:
    // 0x310a80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x310a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x310a84: 0x3e00008  jr          $ra
    ctx->pc = 0x310A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310A84u;
        // 0x310a88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x310A8Cu;
    // 0x310a8c: 0x0  nop
    ctx->pc = 0x310a8cu;
    // NOP
    ctx->pc = 0x310a90u;
}
