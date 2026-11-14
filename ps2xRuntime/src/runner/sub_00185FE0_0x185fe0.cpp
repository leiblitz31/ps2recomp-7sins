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

// Function: sub_00185FE0
// Address: 0x185fe0 - 0x186140
void sub_00185FE0_0x185fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185FE0_0x185fe0");
#endif

    switch (ctx->pc) {
        case 0x186014u: goto label_186014;
        case 0x186028u: goto label_186028;
        case 0x18604cu: goto label_18604c;
        case 0x186074u: goto label_186074;
        case 0x186098u: goto label_186098;
        case 0x1860c0u: goto label_1860c0;
        case 0x1860f0u: goto label_1860f0;
        case 0x186100u: goto label_186100;
        case 0x18611cu: goto label_18611c;
        default: break;
    }

    ctx->pc = 0x185fe0u;

    // 0x185fe0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x185fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x185fe4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x185fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x185fe8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x185fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x185fec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x185fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x185ff0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x185ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x185ff4: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x185ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x185ff8: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x185ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x185ffc: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x185ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x186000: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x186000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x186004: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x186004u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x186008: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x186008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18600c: 0xc0618ec  jal         func_1863B0
    ctx->pc = 0x18600Cu;
    SET_GPR_U32(ctx, 31, 0x186014u);
    ctx->pc = 0x1863B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863B0u, 0x18600Cu, 0x186014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186014u;
label_186014:
    // 0x186014: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x186014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x186018: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x186018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x18601c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x18601cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x186020: 0xc041954  jal         func_106550
    ctx->pc = 0x186020u;
    SET_GPR_U32(ctx, 31, 0x186028u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x186020u, 0x186028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186028u;
label_186028:
    // 0x186028: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x186028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x18602c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18602cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x186030: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x186030u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x186034: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x186034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x186038: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x186038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18603c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18603cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186040: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x186040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186044: 0xc061cc8  jal         func_187320
    ctx->pc = 0x186044u;
    SET_GPR_U32(ctx, 31, 0x18604Cu);
    ctx->pc = 0x187320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187320u, 0x186044u, 0x18604Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18604Cu;
label_18604c:
    // 0x18604c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18604cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186050: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x186050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186054: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x186054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x186058: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x186058u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x18605c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x18605cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x186060: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x186060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x186064: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x186064u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186068: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x186068u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x18606c: 0xc0618a4  jal         func_186290
    ctx->pc = 0x18606Cu;
    SET_GPR_U32(ctx, 31, 0x186074u);
    ctx->pc = 0x186290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186290u, 0x18606Cu, 0x186074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186074u;
label_186074:
    // 0x186074: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x186074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186078: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x186078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18607c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18607cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x186080: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x186080u;
    {
        const bool branch_taken_0x186080 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x186080) {
            ctx->pc = 0x1860A4u;
            goto label_1860a4;
        }
    }
    ctx->pc = 0x186088u;
    // 0x186088: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x186088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18608c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x18608cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x186090: 0xc0618c4  jal         func_186310
    ctx->pc = 0x186090u;
    SET_GPR_U32(ctx, 31, 0x186098u);
    ctx->pc = 0x186310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186310u, 0x186090u, 0x186098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186098u;
label_186098:
    // 0x186098: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x186098u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x18609c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x18609Cu;
    {
        const bool branch_taken_0x18609c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18609c) {
            ctx->pc = 0x1860C4u;
            goto label_1860c4;
        }
    }
    ctx->pc = 0x1860A4u;
label_1860a4:
    // 0x1860a4: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x1860a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x1860a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1860a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1860ac: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1860acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1860b0: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x1860b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1860b4: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x1860b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1860b8: 0xc061884  jal         func_186210
    ctx->pc = 0x1860B8u;
    SET_GPR_U32(ctx, 31, 0x1860C0u);
    ctx->pc = 0x186210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186210u, 0x1860B8u, 0x1860C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1860C0u;
label_1860c0:
    // 0x1860c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1860c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1860c4:
    // 0x1860c4: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x1860c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1860c8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1860C8u;
    {
        const bool branch_taken_0x1860c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1860c8) {
            ctx->pc = 0x1860F4u;
            goto label_1860f4;
        }
    }
    ctx->pc = 0x1860D0u;
    // 0x1860d0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1860d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1860d4: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x1860d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x1860d8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1860d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1860dc: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1860dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1860e0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1860e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1860e4: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1860e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1860e8: 0xc0618a4  jal         func_186290
    ctx->pc = 0x1860E8u;
    SET_GPR_U32(ctx, 31, 0x1860F0u);
    ctx->pc = 0x186290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186290u, 0x1860E8u, 0x1860F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1860F0u;
label_1860f0:
    // 0x1860f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1860f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1860f4:
    // 0x1860f4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1860f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1860f8: 0xc061864  jal         func_186190
    ctx->pc = 0x1860F8u;
    SET_GPR_U32(ctx, 31, 0x186100u);
    ctx->pc = 0x186190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186190u, 0x1860F8u, 0x186100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186100u;
label_186100:
    // 0x186100: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x186100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x186104: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x186104u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x186108: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x186108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18610c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18610cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186110: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x186110u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186114: 0xc061850  jal         func_186140
    ctx->pc = 0x186114u;
    SET_GPR_U32(ctx, 31, 0x18611Cu);
    ctx->pc = 0x186140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186140u, 0x186114u, 0x18611Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18611Cu;
label_18611c:
    // 0x18611c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18611cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x186120: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x186120u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x186124: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x186124u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186128: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x186128u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18612c: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x18612cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x186130: 0x3e00008  jr          $ra
    ctx->pc = 0x186130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186138u;
    // 0x186138: 0x0  nop
    ctx->pc = 0x186138u;
    // NOP
    // 0x18613c: 0x0  nop
    ctx->pc = 0x18613cu;
    // NOP
    ctx->pc = 0x186140u;
}
