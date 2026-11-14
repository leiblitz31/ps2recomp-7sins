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

// Function: sub_00380940
// Address: 0x380940 - 0x380ab8
void sub_00380940_0x380940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00380940_0x380940");
#endif

    switch (ctx->pc) {
        case 0x380990u: goto label_380990;
        case 0x3809e0u: goto label_3809e0;
        default: break;
    }

    ctx->pc = 0x380940u;

    // 0x380940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x380940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x380944: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x380944u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380948: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x380948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38094c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x38094cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x380950: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x380950u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380954: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x380954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x380958: 0x8ce30100  lw          $v1, 0x100($a3)
    ctx->pc = 0x380958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 256)));
    // 0x38095c: 0x10c20009  beq         $a2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x38095Cu;
    {
        const bool branch_taken_0x38095c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x380960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38095Cu;
        // 0x380960: 0x8c630050  lw          $v1, 0x50($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38095c) {
            ctx->pc = 0x380984u;
            goto label_380984;
        }
    }
    ctx->pc = 0x380964u;
    // 0x380964: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x380964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x380968: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x380968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x38096c: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x38096cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x380970: 0x8ce300f4  lw          $v1, 0xF4($a3)
    ctx->pc = 0x380970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 244)));
    // 0x380974: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x380974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x380978: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x380978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x38097c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x38097cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x380980: 0xace300f4  sw          $v1, 0xF4($a3)
    ctx->pc = 0x380980u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 244), GPR_U32(ctx, 3));
label_380984:
    // 0x380984: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x380984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380988: 0xc0df8ca  jal         func_37E328
    ctx->pc = 0x380988u;
    SET_GPR_U32(ctx, 31, 0x380990u);
    ctx->pc = 0x38098Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380988u;
    // 0x38098c: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37E328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37E328u, 0x380988u, 0x380990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380990u;
label_380990:
    // 0x380990: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x380990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x380994: 0x3e00008  jr          $ra
    ctx->pc = 0x380994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380994u;
        // 0x380998: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38099Cu;
    // 0x38099c: 0x0  nop
    ctx->pc = 0x38099cu;
    // NOP
    // 0x3809a0: 0x8c820104  lw          $v0, 0x104($a0)
    ctx->pc = 0x3809a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x3809a4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3809a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3809a8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3809a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3809ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3809ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3809B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3809ACu;
        // 0x3809b0: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3809ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3809B4u;
    // 0x3809b4: 0x0  nop
    ctx->pc = 0x3809b4u;
    // NOP
    // 0x3809b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3809b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3809bc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3809bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3809c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3809c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3809c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3809c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3809c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3809c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3809cc: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x3809ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x3809d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3809D0u;
    {
        const bool branch_taken_0x3809d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3809D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3809D0u;
        // 0x3809d4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3809d0) {
            ctx->pc = 0x3809E4u;
            goto label_3809e4;
        }
    }
    ctx->pc = 0x3809D8u;
    // 0x3809d8: 0xc106698  jal         func_419A60
    ctx->pc = 0x3809D8u;
    SET_GPR_U32(ctx, 31, 0x3809E0u);
    ctx->pc = 0x3809DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3809D8u;
    // 0x3809dc: 0x8c4400a0  lw          $a0, 0xA0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419A60u, 0x3809D8u, 0x3809E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3809E0u;
label_3809e0:
    // 0x3809e0: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x3809e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
label_3809e4:
    // 0x3809e4: 0x56200001  bnel        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3809E4u;
    {
        const bool branch_taken_0x3809e4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3809e4) {
            ctx->pc = 0x3809E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3809E4u;
            // 0x3809e8: 0xae110108  sw          $s1, 0x108($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3809ECu;
            goto label_3809ec;
        }
    }
    ctx->pc = 0x3809ECu;
label_3809ec:
    // 0x3809ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3809ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3809f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3809f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3809f4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3809f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3809f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3809f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3809fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3809FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3809FCu;
        // 0x380a00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3809FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380A04u;
    // 0x380a04: 0x0  nop
    ctx->pc = 0x380a04u;
    // NOP
    // 0x380a08: 0x3e00008  jr          $ra
    ctx->pc = 0x380A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380A08u;
        // 0x380a0c: 0x8c820108  lw          $v0, 0x108($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380A10u;
    // 0x380a10: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x380a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x380a14: 0x3e00008  jr          $ra
    ctx->pc = 0x380A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380A14u;
        // 0x380a18: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380A1Cu;
    // 0x380a1c: 0x0  nop
    ctx->pc = 0x380a1cu;
    // NOP
    // 0x380a20: 0xac850110  sw          $a1, 0x110($a0)
    ctx->pc = 0x380a20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 5));
    // 0x380a24: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x380a24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380a28: 0xac860114  sw          $a2, 0x114($a0)
    ctx->pc = 0x380a28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 6));
    // 0x380a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x380A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380A2Cu;
        // 0x380a30: 0xac870118  sw          $a3, 0x118($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 280), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380A34u;
    // 0x380a34: 0x0  nop
    ctx->pc = 0x380a34u;
    // NOP
    // 0x380a38: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x380A38u;
    {
        const bool branch_taken_0x380a38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x380a38) {
            ctx->pc = 0x380A48u;
            goto label_380a48;
        }
    }
    ctx->pc = 0x380A40u;
    // 0x380a40: 0x8c820110  lw          $v0, 0x110($a0)
    ctx->pc = 0x380a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 272)));
    // 0x380a44: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x380a44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_380a48:
    // 0x380a48: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x380A48u;
    {
        const bool branch_taken_0x380a48 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x380a48) {
            ctx->pc = 0x380A58u;
            goto label_380a58;
        }
    }
    ctx->pc = 0x380A50u;
    // 0x380a50: 0x8c820114  lw          $v0, 0x114($a0)
    ctx->pc = 0x380a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x380a54: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x380a54u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_380a58:
    // 0x380a58: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x380A58u;
    {
        const bool branch_taken_0x380a58 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x380a58) {
            ctx->pc = 0x380A68u;
            goto label_380a68;
        }
    }
    ctx->pc = 0x380A60u;
    // 0x380a60: 0x8c820118  lw          $v0, 0x118($a0)
    ctx->pc = 0x380a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x380a64: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x380a64u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_380a68:
    // 0x380a68: 0x3e00008  jr          $ra
    ctx->pc = 0x380A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380A68u;
        // 0x380a6c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380A70u;
    // 0x380a70: 0x3e00008  jr          $ra
    ctx->pc = 0x380A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380A70u;
        // 0x380a74: 0x248200e0  addiu       $v0, $a0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380A70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380A78u;
    // 0x380a78: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x380A78u;
    {
        const bool branch_taken_0x380a78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x380a78) {
            ctx->pc = 0x380A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x380A78u;
            // 0x380a7c: 0x8c8300f0  lw          $v1, 0xF0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x380A90u;
            goto label_380a90;
        }
    }
    ctx->pc = 0x380A80u;
    // 0x380a80: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x380a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x380a84: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x380a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x380a88: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x380A88u;
    {
        const bool branch_taken_0x380a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380A88u;
        // 0x380a8c: 0xac8200f0  sw          $v0, 0xF0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380a88) {
            ctx->pc = 0x380AA0u;
            goto label_380aa0;
        }
    }
    ctx->pc = 0x380A90u;
label_380a90:
    // 0x380a90: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x380a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x380a94: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x380a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x380a98: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x380a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x380a9c: 0xac8300f0  sw          $v1, 0xF0($a0)
    ctx->pc = 0x380a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 3));
label_380aa0:
    // 0x380aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x380AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380AA0u;
        // 0x380aa4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380AA8u;
    // 0x380aa8: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x380aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x380aac: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x380aacu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x380ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x380AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380AB0u;
        // 0x380ab4: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380AB8u;
}
