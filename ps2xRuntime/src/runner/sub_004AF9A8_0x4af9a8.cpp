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

// Function: sub_004AF9A8
// Address: 0x4af9a8 - 0x4afb08
void sub_004AF9A8_0x4af9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AF9A8_0x4af9a8");
#endif

    switch (ctx->pc) {
        case 0x4af9d0u: goto label_4af9d0;
        case 0x4af9f4u: goto label_4af9f4;
        case 0x4afa08u: goto label_4afa08;
        case 0x4afa28u: goto label_4afa28;
        case 0x4afa38u: goto label_4afa38;
        default: break;
    }

    ctx->pc = 0x4af9a8u;

    // 0x4af9a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4af9a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4af9ac: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4af9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4af9b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4af9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4af9b4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x4af9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x4af9b8: 0x2450e9c0  addiu       $s0, $v0, -0x1640
    ctx->pc = 0x4af9b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961600));
    // 0x4af9bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4af9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4af9c0: 0x24a52d60  addiu       $a1, $a1, 0x2D60
    ctx->pc = 0x4af9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11616));
    // 0x4af9c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4af9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af9c8: 0xc126852  jal         func_49A148
    ctx->pc = 0x4AF9C8u;
    SET_GPR_U32(ctx, 31, 0x4AF9D0u);
    ctx->pc = 0x4AF9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF9C8u;
    // 0x4af9cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49A148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49A148u, 0x4AF9C8u, 0x4AF9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF9D0u;
label_4af9d0:
    // 0x4af9d0: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x4af9d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x4af9d4: 0x3c090003  lui         $t1, 0x3
    ctx->pc = 0x4af9d4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)3 << 16));
    // 0x4af9d8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4af9d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af9dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4af9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af9e0: 0x24e7ea20  addiu       $a3, $a3, -0x15E0
    ctx->pc = 0x4af9e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961696));
    // 0x4af9e4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x4af9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4af9e8: 0x2788c248  addiu       $t0, $gp, -0x3DB8
    ctx->pc = 0x4af9e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951496));
    // 0x4af9ec: 0xc12679e  jal         func_499E78
    ctx->pc = 0x4AF9ECu;
    SET_GPR_U32(ctx, 31, 0x4AF9F4u);
    ctx->pc = 0x4AF9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF9ECu;
    // 0x4af9f0: 0x3529080e  ori         $t1, $t1, 0x80E (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2062);
    ctx->in_delay_slot = false;
    ctx->pc = 0x499E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499E78u, 0x4AF9ECu, 0x4AF9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF9F4u;
label_4af9f4:
    // 0x4af9f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4af9f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af9f8: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4AF9F8u;
    {
        const bool branch_taken_0x4af9f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF9F8u;
        // 0x4af9fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af9f8) {
            ctx->pc = 0x4AFA3Cu;
            goto label_4afa3c;
        }
    }
    ctx->pc = 0x4AFA00u;
    // 0x4afa00: 0xc12bc02  jal         func_4AF008
    ctx->pc = 0x4AFA00u;
    SET_GPR_U32(ctx, 31, 0x4AFA08u);
    ctx->pc = 0x4AFA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AFA00u;
    // 0x4afa04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AF008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AF008u, 0x4AFA00u, 0x4AFA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AFA08u;
label_4afa08:
    // 0x4afa08: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x4afa08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
    // 0x4afa0c: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x4afa0cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
    // 0x4afa10: 0x24a57450  addiu       $a1, $a1, 0x7450
    ctx->pc = 0x4afa10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29776));
    // 0x4afa14: 0x24e774e0  addiu       $a3, $a3, 0x74E0
    ctx->pc = 0x4afa14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 29920));
    // 0x4afa18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4afa18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4afa1c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x4afa1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4afa20: 0xc12668c  jal         func_499A30
    ctx->pc = 0x4AFA20u;
    SET_GPR_U32(ctx, 31, 0x4AFA28u);
    ctx->pc = 0x4AFA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AFA20u;
    // 0x4afa24: 0x24080009  addiu       $t0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x499A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499A30u, 0x4AFA20u, 0x4AFA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AFA28u;
label_4afa28:
    // 0x4afa28: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AFA28u;
    {
        const bool branch_taken_0x4afa28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AFA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFA28u;
        // 0x4afa2c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4afa28) {
            ctx->pc = 0x4AFA3Cu;
            goto label_4afa3c;
        }
    }
    ctx->pc = 0x4AFA30u;
    // 0x4afa30: 0xc126614  jal         func_499850
    ctx->pc = 0x4AFA30u;
    SET_GPR_U32(ctx, 31, 0x4AFA38u);
    ctx->pc = 0x4AFA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AFA30u;
    // 0x4afa34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x499850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499850u, 0x4AFA30u, 0x4AFA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AFA38u;
label_4afa38:
    // 0x4afa38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4afa38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4afa3c:
    // 0x4afa3c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4afa3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4afa40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4afa40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4afa44: 0x3e00008  jr          $ra
    ctx->pc = 0x4AFA44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AFA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFA44u;
        // 0x4afa48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AFA44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AFA4Cu;
    // 0x4afa4c: 0x0  nop
    ctx->pc = 0x4afa4cu;
    // NOP
    // 0x4afa50: 0x8c860f5c  lw          $a2, 0xF5C($a0)
    ctx->pc = 0x4afa50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3932)));
    // 0x4afa54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4afa54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4afa58: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x4afa58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x4afa5c: 0x1443001c  bne         $v0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x4AFA5Cu;
    {
        const bool branch_taken_0x4afa5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4AFA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFA5Cu;
        // 0x4afa60: 0xaca60008  sw          $a2, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4afa5c) {
            ctx->pc = 0x4AFAD0u;
            goto label_4afad0;
        }
    }
    ctx->pc = 0x4AFA64u;
    // 0x4afa64: 0x8c870f4c  lw          $a3, 0xF4C($a0)
    ctx->pc = 0x4afa64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3916)));
    // 0x4afa68: 0x50e00019  beql        $a3, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x4AFA68u;
    {
        const bool branch_taken_0x4afa68 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x4afa68) {
            ctx->pc = 0x4AFA6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AFA68u;
            // 0x4afa6c: 0xaca00008  sw          $zero, 0x8($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AFAD0u;
            goto label_4afad0;
        }
    }
    ctx->pc = 0x4AFA70u;
    // 0x4afa70: 0x4c00005  bltz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AFA70u;
    {
        const bool branch_taken_0x4afa70 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x4AFA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFA70u;
        // 0x4afa74: 0x61842  srl         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4afa70) {
            ctx->pc = 0x4AFA88u;
            goto label_4afa88;
        }
    }
    ctx->pc = 0x4AFA78u;
    // 0x4afa78: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x4afa78u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4afa7c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4afa7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4afa80: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4AFA80u;
    {
        const bool branch_taken_0x4afa80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4afa80) {
            ctx->pc = 0x4AFA9Cu;
            goto label_4afa9c;
        }
    }
    ctx->pc = 0x4AFA88u;
label_4afa88:
    // 0x4afa88: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x4afa88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x4afa8c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4afa8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4afa90: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4afa90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4afa94: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4afa94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4afa98: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x4afa98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_4afa9c:
    // 0x4afa9c: 0x4e00005  bltz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AFA9Cu;
    {
        const bool branch_taken_0x4afa9c = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x4AFAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFA9Cu;
        // 0x4afaa0: 0x71842  srl         $v1, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4afa9c) {
            ctx->pc = 0x4AFAB4u;
            goto label_4afab4;
        }
    }
    ctx->pc = 0x4AFAA4u;
    // 0x4afaa4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x4afaa4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4afaa8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4afaa8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4afaac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4AFAACu;
    {
        const bool branch_taken_0x4afaac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4afaac) {
            ctx->pc = 0x4AFAC8u;
            goto label_4afac8;
        }
    }
    ctx->pc = 0x4AFAB4u;
label_4afab4:
    // 0x4afab4: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x4afab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x4afab8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4afab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4afabc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4afabcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4afac0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4afac0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4afac4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4afac4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_4afac8:
    // 0x4afac8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x4afac8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x4afacc: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x4afaccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_4afad0:
    // 0x4afad0: 0x8c820f54  lw          $v0, 0xF54($a0)
    ctx->pc = 0x4afad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3924)));
    // 0x4afad4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4afad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4afad8: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x4afad8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4afadc: 0x14c30004  bne         $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AFADCu;
    {
        const bool branch_taken_0x4afadc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x4AFAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFADCu;
        // 0x4afae0: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4afadc) {
            ctx->pc = 0x4AFAF0u;
            goto label_4afaf0;
        }
    }
    ctx->pc = 0x4AFAE4u;
    // 0x4afae4: 0x24820f64  addiu       $v0, $a0, 0xF64
    ctx->pc = 0x4afae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3940));
    // 0x4afae8: 0x3e00008  jr          $ra
    ctx->pc = 0x4AFAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AFAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFAE8u;
        // 0x4afaec: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AFAE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AFAF0u;
label_4afaf0:
    // 0x4afaf0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4afaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4afaf4: 0x14c20002  bne         $a2, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4AFAF4u;
    {
        const bool branch_taken_0x4afaf4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x4AFAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFAF4u;
        // 0x4afaf8: 0x24820fe4  addiu       $v0, $a0, 0xFE4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4068));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4afaf4) {
            ctx->pc = 0x4AFB00u;
            goto label_4afb00;
        }
    }
    ctx->pc = 0x4AFAFCu;
    // 0x4afafc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4afafcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_4afb00:
    // 0x4afb00: 0x3e00008  jr          $ra
    ctx->pc = 0x4AFB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AFB00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AFB08u;
}
