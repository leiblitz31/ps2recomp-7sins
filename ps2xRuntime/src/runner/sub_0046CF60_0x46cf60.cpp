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

// Function: sub_0046CF60
// Address: 0x46cf60 - 0x46d250
void sub_0046CF60_0x46cf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046CF60_0x46cf60");
#endif

    switch (ctx->pc) {
        case 0x46cf8cu: goto label_46cf8c;
        case 0x46cf98u: goto label_46cf98;
        case 0x46cfa4u: goto label_46cfa4;
        case 0x46cfb0u: goto label_46cfb0;
        case 0x46cfbcu: goto label_46cfbc;
        case 0x46cfc8u: goto label_46cfc8;
        case 0x46cfd4u: goto label_46cfd4;
        case 0x46cfecu: goto label_46cfec;
        case 0x46cffcu: goto label_46cffc;
        case 0x46d00cu: goto label_46d00c;
        case 0x46d01cu: goto label_46d01c;
        case 0x46d02cu: goto label_46d02c;
        case 0x46d03cu: goto label_46d03c;
        case 0x46d04cu: goto label_46d04c;
        case 0x46d05cu: goto label_46d05c;
        case 0x46d06cu: goto label_46d06c;
        case 0x46d074u: goto label_46d074;
        case 0x46d088u: goto label_46d088;
        case 0x46d094u: goto label_46d094;
        case 0x46d0a4u: goto label_46d0a4;
        case 0x46d0b4u: goto label_46d0b4;
        case 0x46d0c8u: goto label_46d0c8;
        case 0x46d0d4u: goto label_46d0d4;
        case 0x46d0e4u: goto label_46d0e4;
        case 0x46d0f4u: goto label_46d0f4;
        case 0x46d108u: goto label_46d108;
        case 0x46d114u: goto label_46d114;
        case 0x46d124u: goto label_46d124;
        case 0x46d130u: goto label_46d130;
        case 0x46d140u: goto label_46d140;
        case 0x46d15cu: goto label_46d15c;
        case 0x46d16cu: goto label_46d16c;
        case 0x46d17cu: goto label_46d17c;
        case 0x46d18cu: goto label_46d18c;
        case 0x46d19cu: goto label_46d19c;
        case 0x46d1acu: goto label_46d1ac;
        case 0x46d1dcu: goto label_46d1dc;
        case 0x46d1ecu: goto label_46d1ec;
        case 0x46d1fcu: goto label_46d1fc;
        case 0x46d20cu: goto label_46d20c;
        case 0x46d21cu: goto label_46d21c;
        case 0x46d22cu: goto label_46d22c;
        default: break;
    }

    ctx->pc = 0x46cf60u;

    // 0x46cf60: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x46cf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x46cf64: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x46cf64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x46cf68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x46cf68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x46cf6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x46cf6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x46cf70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46cf70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x46cf74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46cf74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x46cf78: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x46cf78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x46cf7c: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x46cf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
    // 0x46cf80: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x46cf80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x46cf84: 0xc041b48  jal         func_106D20
    ctx->pc = 0x46CF84u;
    SET_GPR_U32(ctx, 31, 0x46CF8Cu);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x46CF84u, 0x46CF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CF8Cu;
label_46cf8c:
    // 0x46cf8c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x46cf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x46cf90: 0xc041b48  jal         func_106D20
    ctx->pc = 0x46CF90u;
    SET_GPR_U32(ctx, 31, 0x46CF98u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x46CF90u, 0x46CF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CF98u;
label_46cf98:
    // 0x46cf98: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x46cf98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x46cf9c: 0xc041b48  jal         func_106D20
    ctx->pc = 0x46CF9Cu;
    SET_GPR_U32(ctx, 31, 0x46CFA4u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x46CF9Cu, 0x46CFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CFA4u;
label_46cfa4:
    // 0x46cfa4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x46cfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x46cfa8: 0xc041b48  jal         func_106D20
    ctx->pc = 0x46CFA8u;
    SET_GPR_U32(ctx, 31, 0x46CFB0u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x46CFA8u, 0x46CFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CFB0u;
label_46cfb0:
    // 0x46cfb0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x46cfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x46cfb4: 0xc041b48  jal         func_106D20
    ctx->pc = 0x46CFB4u;
    SET_GPR_U32(ctx, 31, 0x46CFBCu);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x46CFB4u, 0x46CFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CFBCu;
label_46cfbc:
    // 0x46cfbc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x46cfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x46cfc0: 0xc041b48  jal         func_106D20
    ctx->pc = 0x46CFC0u;
    SET_GPR_U32(ctx, 31, 0x46CFC8u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x46CFC0u, 0x46CFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CFC8u;
label_46cfc8:
    // 0x46cfc8: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x46cfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x46cfcc: 0xc11a440  jal         func_469100
    ctx->pc = 0x46CFCCu;
    SET_GPR_U32(ctx, 31, 0x46CFD4u);
    ctx->pc = 0x469100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469100u, 0x46CFCCu, 0x46CFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CFD4u;
label_46cfd4:
    // 0x46cfd4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x46cfd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46cfd8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x46cfd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46cfdc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x46cfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x46cfe0: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x46cfe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x46cfe4: 0xc119088  jal         func_464220
    ctx->pc = 0x46CFE4u;
    SET_GPR_U32(ctx, 31, 0x46CFECu);
    ctx->pc = 0x464220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464220u, 0x46CFE4u, 0x46CFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CFECu;
label_46cfec:
    // 0x46cfec: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x46cfecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x46cff0: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x46cff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x46cff4: 0xc1190bc  jal         func_4642F0
    ctx->pc = 0x46CFF4u;
    SET_GPR_U32(ctx, 31, 0x46CFFCu);
    ctx->pc = 0x4642F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4642F0u, 0x46CFF4u, 0x46CFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CFFCu;
label_46cffc:
    // 0x46cffc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x46cffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x46d000: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x46d000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x46d004: 0xc119138  jal         func_4644E0
    ctx->pc = 0x46D004u;
    SET_GPR_U32(ctx, 31, 0x46D00Cu);
    ctx->pc = 0x4644E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4644E0u, 0x46D004u, 0x46D00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D00Cu;
label_46d00c:
    // 0x46d00c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x46d00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x46d010: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x46d010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x46d014: 0xc119168  jal         func_4645A0
    ctx->pc = 0x46D014u;
    SET_GPR_U32(ctx, 31, 0x46D01Cu);
    ctx->pc = 0x4645A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4645A0u, 0x46D014u, 0x46D01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D01Cu;
label_46d01c:
    // 0x46d01c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x46d01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x46d020: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x46d020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x46d024: 0xc0430e4  jal         func_10C390
    ctx->pc = 0x46D024u;
    SET_GPR_U32(ctx, 31, 0x46D02Cu);
    ctx->pc = 0x10C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C390u, 0x46D024u, 0x46D02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D02Cu;
label_46d02c:
    // 0x46d02c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x46d02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x46d030: 0x2785b2f0  addiu       $a1, $gp, -0x4D10
    ctx->pc = 0x46d030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947568));
    // 0x46d034: 0xc0424e8  jal         func_1093A0
    ctx->pc = 0x46D034u;
    SET_GPR_U32(ctx, 31, 0x46D03Cu);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x46D034u, 0x46D03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D03Cu;
label_46d03c:
    // 0x46d03c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x46d03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x46d040: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x46d040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x46d044: 0xc048c50  jal         func_123140
    ctx->pc = 0x46D044u;
    SET_GPR_U32(ctx, 31, 0x46D04Cu);
    ctx->pc = 0x123140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123140u, 0x46D044u, 0x46D04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D04Cu;
label_46d04c:
    // 0x46d04c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x46d04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x46d050: 0x2785b2f4  addiu       $a1, $gp, -0x4D0C
    ctx->pc = 0x46d050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947572));
    // 0x46d054: 0xc0424e8  jal         func_1093A0
    ctx->pc = 0x46D054u;
    SET_GPR_U32(ctx, 31, 0x46D05Cu);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x46D054u, 0x46D05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D05Cu;
label_46d05c:
    // 0x46d05c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x46d05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x46d060: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x46d060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x46d064: 0xc048c50  jal         func_123140
    ctx->pc = 0x46D064u;
    SET_GPR_U32(ctx, 31, 0x46D06Cu);
    ctx->pc = 0x123140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123140u, 0x46D064u, 0x46D06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D06Cu;
label_46d06c:
    // 0x46d06c: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x46D06Cu;
    {
        const bool branch_taken_0x46d06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d06c) {
            ctx->pc = 0x46D1BCu;
            goto label_46d1bc;
        }
    }
    ctx->pc = 0x46D074u;
label_46d074:
    // 0x46d074: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x46d074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x46d078: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x46d078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x46d07c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x46d07cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d080: 0xc11b170  jal         func_46C5C0
    ctx->pc = 0x46D080u;
    SET_GPR_U32(ctx, 31, 0x46D088u);
    ctx->pc = 0x46C5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C5C0u, 0x46D080u, 0x46D088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D088u;
label_46d088:
    // 0x46d088: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x46d088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d08c: 0xc11a438  jal         func_4690E0
    ctx->pc = 0x46D08Cu;
    SET_GPR_U32(ctx, 31, 0x46D094u);
    ctx->pc = 0x4690E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4690E0u, 0x46D08Cu, 0x46D094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D094u;
label_46d094:
    // 0x46d094: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x46d094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x46d098: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x46d098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d09c: 0xc0430e4  jal         func_10C390
    ctx->pc = 0x46D09Cu;
    SET_GPR_U32(ctx, 31, 0x46D0A4u);
    ctx->pc = 0x10C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C390u, 0x46D09Cu, 0x46D0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D0A4u;
label_46d0a4:
    // 0x46d0a4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x46d0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x46d0a8: 0x2785b2f0  addiu       $a1, $gp, -0x4D10
    ctx->pc = 0x46d0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947568));
    // 0x46d0ac: 0xc0424e8  jal         func_1093A0
    ctx->pc = 0x46D0ACu;
    SET_GPR_U32(ctx, 31, 0x46D0B4u);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x46D0ACu, 0x46D0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D0B4u;
label_46d0b4:
    // 0x46d0b4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x46d0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x46d0b8: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x46d0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x46d0bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x46d0bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d0c0: 0xc11b170  jal         func_46C5C0
    ctx->pc = 0x46D0C0u;
    SET_GPR_U32(ctx, 31, 0x46D0C8u);
    ctx->pc = 0x46C5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C5C0u, 0x46D0C0u, 0x46D0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D0C8u;
label_46d0c8:
    // 0x46d0c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x46d0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d0cc: 0xc11a430  jal         func_4690C0
    ctx->pc = 0x46D0CCu;
    SET_GPR_U32(ctx, 31, 0x46D0D4u);
    ctx->pc = 0x4690C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4690C0u, 0x46D0CCu, 0x46D0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D0D4u;
label_46d0d4:
    // 0x46d0d4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x46d0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x46d0d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x46d0d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d0dc: 0xc048c50  jal         func_123140
    ctx->pc = 0x46D0DCu;
    SET_GPR_U32(ctx, 31, 0x46D0E4u);
    ctx->pc = 0x123140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123140u, 0x46D0DCu, 0x46D0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D0E4u;
label_46d0e4:
    // 0x46d0e4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x46d0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x46d0e8: 0x2785b2f4  addiu       $a1, $gp, -0x4D0C
    ctx->pc = 0x46d0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947572));
    // 0x46d0ec: 0xc0424e8  jal         func_1093A0
    ctx->pc = 0x46D0ECu;
    SET_GPR_U32(ctx, 31, 0x46D0F4u);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x46D0ECu, 0x46D0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D0F4u;
label_46d0f4:
    // 0x46d0f4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x46d0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x46d0f8: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x46d0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x46d0fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x46d0fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d100: 0xc11b170  jal         func_46C5C0
    ctx->pc = 0x46D100u;
    SET_GPR_U32(ctx, 31, 0x46D108u);
    ctx->pc = 0x46C5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C5C0u, 0x46D100u, 0x46D108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D108u;
label_46d108:
    // 0x46d108: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x46d108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d10c: 0xc11a428  jal         func_4690A0
    ctx->pc = 0x46D10Cu;
    SET_GPR_U32(ctx, 31, 0x46D114u);
    ctx->pc = 0x4690A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4690A0u, 0x46D10Cu, 0x46D114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D114u;
label_46d114:
    // 0x46d114: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x46d114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x46d118: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x46d118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d11c: 0xc048c50  jal         func_123140
    ctx->pc = 0x46D11Cu;
    SET_GPR_U32(ctx, 31, 0x46D124u);
    ctx->pc = 0x123140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123140u, 0x46D11Cu, 0x46D124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D124u;
label_46d124:
    // 0x46d124: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x46d124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x46d128: 0xc041874  jal         func_1061D0
    ctx->pc = 0x46D128u;
    SET_GPR_U32(ctx, 31, 0x46D130u);
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x46D128u, 0x46D130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D130u;
label_46d130:
    // 0x46d130: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x46d130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x46d134: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x46d134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d138: 0xc048c30  jal         func_1230C0
    ctx->pc = 0x46D138u;
    SET_GPR_U32(ctx, 31, 0x46D140u);
    ctx->pc = 0x1230C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230C0u, 0x46D138u, 0x46D140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D140u;
label_46d140:
    // 0x46d140: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x46D140u;
    {
        const bool branch_taken_0x46d140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d140) {
            ctx->pc = 0x46D1B8u;
            goto label_46d1b8;
        }
    }
    ctx->pc = 0x46D148u;
    // 0x46d148: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x46d148u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d14c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x46d14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x46d150: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46d150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46d154: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x46D154u;
    SET_GPR_U32(ctx, 31, 0x46D15Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x46D154u, 0x46D15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D15Cu;
label_46d15c:
    // 0x46d15c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x46d15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x46d160: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46d160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46d164: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x46D164u;
    SET_GPR_U32(ctx, 31, 0x46D16Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x46D164u, 0x46D16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D16Cu;
label_46d16c:
    // 0x46d16c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x46d16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x46d170: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46d170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46d174: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x46D174u;
    SET_GPR_U32(ctx, 31, 0x46D17Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x46D174u, 0x46D17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D17Cu;
label_46d17c:
    // 0x46d17c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x46d17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x46d180: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46d180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46d184: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x46D184u;
    SET_GPR_U32(ctx, 31, 0x46D18Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x46D184u, 0x46D18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D18Cu;
label_46d18c:
    // 0x46d18c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x46d18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x46d190: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46d190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46d194: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x46D194u;
    SET_GPR_U32(ctx, 31, 0x46D19Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x46D194u, 0x46D19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D19Cu;
label_46d19c:
    // 0x46d19c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x46d19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x46d1a0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46d1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46d1a4: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x46D1A4u;
    SET_GPR_U32(ctx, 31, 0x46D1ACu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x46D1A4u, 0x46D1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D1ACu;
label_46d1ac:
    // 0x46d1ac: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x46d1acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d1b0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x46D1B0u;
    {
        const bool branch_taken_0x46d1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d1b0) {
            ctx->pc = 0x46D230u;
            goto label_46d230;
        }
    }
    ctx->pc = 0x46D1B8u;
label_46d1b8:
    // 0x46d1b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x46d1b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_46d1bc:
    // 0x46d1bc: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x46d1bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x46d1c0: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x46D1C0u;
    {
        const bool branch_taken_0x46d1c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46d1c0) {
            ctx->pc = 0x46D074u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46d074;
        }
    }
    ctx->pc = 0x46D1C8u;
    // 0x46d1c8: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x46d1c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46d1cc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x46d1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x46d1d0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46d1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46d1d4: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x46D1D4u;
    SET_GPR_U32(ctx, 31, 0x46D1DCu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x46D1D4u, 0x46D1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D1DCu;
label_46d1dc:
    // 0x46d1dc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x46d1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x46d1e0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46d1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46d1e4: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x46D1E4u;
    SET_GPR_U32(ctx, 31, 0x46D1ECu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x46D1E4u, 0x46D1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D1ECu;
label_46d1ec:
    // 0x46d1ec: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x46d1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x46d1f0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46d1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46d1f4: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x46D1F4u;
    SET_GPR_U32(ctx, 31, 0x46D1FCu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x46D1F4u, 0x46D1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D1FCu;
label_46d1fc:
    // 0x46d1fc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x46d1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x46d200: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46d200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46d204: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x46D204u;
    SET_GPR_U32(ctx, 31, 0x46D20Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x46D204u, 0x46D20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D20Cu;
label_46d20c:
    // 0x46d20c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x46d20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x46d210: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46d210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46d214: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x46D214u;
    SET_GPR_U32(ctx, 31, 0x46D21Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x46D214u, 0x46D21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D21Cu;
label_46d21c:
    // 0x46d21c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x46d21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x46d220: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46d220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46d224: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x46D224u;
    SET_GPR_U32(ctx, 31, 0x46D22Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x46D224u, 0x46D22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D22Cu;
label_46d22c:
    // 0x46d22c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x46d22cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46d230:
    // 0x46d230: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x46d230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46d234: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x46d234u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46d238: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x46d238u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46d23c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46d23cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46d240: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46d240u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46d244: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x46d244u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x46d248: 0x3e00008  jr          $ra
    ctx->pc = 0x46D248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46D248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46D250u;
}
