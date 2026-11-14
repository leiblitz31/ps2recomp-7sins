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

// Function: sub_0019CF80
// Address: 0x19cf80 - 0x19d0e0
void sub_0019CF80_0x19cf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019CF80_0x19cf80");
#endif

    switch (ctx->pc) {
        case 0x19cfb4u: goto label_19cfb4;
        case 0x19cfc8u: goto label_19cfc8;
        case 0x19cfecu: goto label_19cfec;
        case 0x19d014u: goto label_19d014;
        case 0x19d038u: goto label_19d038;
        case 0x19d060u: goto label_19d060;
        case 0x19d090u: goto label_19d090;
        case 0x19d0a0u: goto label_19d0a0;
        case 0x19d0bcu: goto label_19d0bc;
        default: break;
    }

    ctx->pc = 0x19cf80u;

    // 0x19cf80: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x19cf80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x19cf84: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19cf84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19cf88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19cf88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19cf8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19cf8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19cf90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19cf90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19cf94: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x19cf94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x19cf98: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x19cf98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x19cf9c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x19cf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x19cfa0: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x19cfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x19cfa4: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x19cfa4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x19cfa8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x19cfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19cfac: 0xc065c84  jal         func_197210
    ctx->pc = 0x19CFACu;
    SET_GPR_U32(ctx, 31, 0x19CFB4u);
    ctx->pc = 0x197210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197210u, 0x19CFACu, 0x19CFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CFB4u;
label_19cfb4:
    // 0x19cfb4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x19cfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x19cfb8: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x19cfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x19cfbc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x19cfbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x19cfc0: 0xc041954  jal         func_106550
    ctx->pc = 0x19CFC0u;
    SET_GPR_U32(ctx, 31, 0x19CFC8u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x19CFC0u, 0x19CFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CFC8u;
label_19cfc8:
    // 0x19cfc8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x19cfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x19cfcc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19cfccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19cfd0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x19cfd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19cfd4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x19cfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19cfd8: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x19cfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x19cfdc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x19cfdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cfe0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19cfe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cfe4: 0xc067984  jal         func_19E610
    ctx->pc = 0x19CFE4u;
    SET_GPR_U32(ctx, 31, 0x19CFECu);
    ctx->pc = 0x19E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E610u, 0x19CFE4u, 0x19CFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CFECu;
label_19cfec:
    // 0x19cfec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19cfecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cff0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x19cff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cff4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x19cff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19cff8: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x19cff8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x19cffc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x19cffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19d000: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x19d000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19d004: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x19d004u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d008: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x19d008u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x19d00c: 0xc067500  jal         func_19D400
    ctx->pc = 0x19D00Cu;
    SET_GPR_U32(ctx, 31, 0x19D014u);
    ctx->pc = 0x19D400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D400u, 0x19D00Cu, 0x19D014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D014u;
label_19d014:
    // 0x19d014: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19d014u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d018: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x19d018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19d01c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19d01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d020: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19D020u;
    {
        const bool branch_taken_0x19d020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19d020) {
            ctx->pc = 0x19D044u;
            goto label_19d044;
        }
    }
    ctx->pc = 0x19D028u;
    // 0x19d028: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19d028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d02c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x19d02cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19d030: 0xc06748c  jal         func_19D230
    ctx->pc = 0x19D030u;
    SET_GPR_U32(ctx, 31, 0x19D038u);
    ctx->pc = 0x19D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D230u, 0x19D030u, 0x19D038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D038u;
label_19d038:
    // 0x19d038: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x19d038u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x19d03c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x19D03Cu;
    {
        const bool branch_taken_0x19d03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d03c) {
            ctx->pc = 0x19D064u;
            goto label_19d064;
        }
    }
    ctx->pc = 0x19D044u;
label_19d044:
    // 0x19d044: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x19d044u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x19d048: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19d048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d04c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x19d04cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19d050: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x19d050u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19d054: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x19d054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x19d058: 0xc06746c  jal         func_19D1B0
    ctx->pc = 0x19D058u;
    SET_GPR_U32(ctx, 31, 0x19D060u);
    ctx->pc = 0x19D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D1B0u, 0x19D058u, 0x19D060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D060u;
label_19d060:
    // 0x19d060: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19d060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19d064:
    // 0x19d064: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x19d064u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19d068: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19D068u;
    {
        const bool branch_taken_0x19d068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d068) {
            ctx->pc = 0x19D094u;
            goto label_19d094;
        }
    }
    ctx->pc = 0x19D070u;
    // 0x19d070: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x19d070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19d074: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x19d074u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x19d078: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x19d078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19d07c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x19d07cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19d080: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x19d080u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d084: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x19d084u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19d088: 0xc067500  jal         func_19D400
    ctx->pc = 0x19D088u;
    SET_GPR_U32(ctx, 31, 0x19D090u);
    ctx->pc = 0x19D400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D400u, 0x19D088u, 0x19D090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D090u;
label_19d090:
    // 0x19d090: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19d090u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19d094:
    // 0x19d094: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x19d094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19d098: 0xc06744c  jal         func_19D130
    ctx->pc = 0x19D098u;
    SET_GPR_U32(ctx, 31, 0x19D0A0u);
    ctx->pc = 0x19D130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D130u, 0x19D098u, 0x19D0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D0A0u;
label_19d0a0:
    // 0x19d0a0: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19d0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x19d0a4: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x19d0a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x19d0a8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x19d0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19d0ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19d0acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d0b0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x19d0b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d0b4: 0xc067438  jal         func_19D0E0
    ctx->pc = 0x19D0B4u;
    SET_GPR_U32(ctx, 31, 0x19D0BCu);
    ctx->pc = 0x19D0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D0E0u, 0x19D0B4u, 0x19D0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D0BCu;
label_19d0bc:
    // 0x19d0bc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19d0bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19d0c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19d0c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19d0c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19d0c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d0c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19d0c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d0cc: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x19d0ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x19d0d0: 0x3e00008  jr          $ra
    ctx->pc = 0x19D0D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D0D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D0D8u;
    // 0x19d0d8: 0x0  nop
    ctx->pc = 0x19d0d8u;
    // NOP
    // 0x19d0dc: 0x0  nop
    ctx->pc = 0x19d0dcu;
    // NOP
    ctx->pc = 0x19d0e0u;
}
