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

// Function: sub_0045F050
// Address: 0x45f050 - 0x45f150
void sub_0045F050_0x45f050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045F050_0x45f050");
#endif

    switch (ctx->pc) {
        case 0x45f050u: goto label_45f050;
        case 0x45f054u: goto label_45f054;
        case 0x45f058u: goto label_45f058;
        case 0x45f05cu: goto label_45f05c;
        case 0x45f060u: goto label_45f060;
        case 0x45f064u: goto label_45f064;
        case 0x45f068u: goto label_45f068;
        case 0x45f06cu: goto label_45f06c;
        case 0x45f070u: goto label_45f070;
        case 0x45f074u: goto label_45f074;
        case 0x45f078u: goto label_45f078;
        case 0x45f07cu: goto label_45f07c;
        case 0x45f080u: goto label_45f080;
        case 0x45f084u: goto label_45f084;
        case 0x45f088u: goto label_45f088;
        case 0x45f08cu: goto label_45f08c;
        case 0x45f090u: goto label_45f090;
        case 0x45f094u: goto label_45f094;
        case 0x45f098u: goto label_45f098;
        case 0x45f09cu: goto label_45f09c;
        case 0x45f0a0u: goto label_45f0a0;
        case 0x45f0a4u: goto label_45f0a4;
        case 0x45f0a8u: goto label_45f0a8;
        case 0x45f0acu: goto label_45f0ac;
        case 0x45f0b0u: goto label_45f0b0;
        case 0x45f0b4u: goto label_45f0b4;
        case 0x45f0b8u: goto label_45f0b8;
        case 0x45f0bcu: goto label_45f0bc;
        case 0x45f0c0u: goto label_45f0c0;
        case 0x45f0c4u: goto label_45f0c4;
        case 0x45f0c8u: goto label_45f0c8;
        case 0x45f0ccu: goto label_45f0cc;
        case 0x45f0d0u: goto label_45f0d0;
        case 0x45f0d4u: goto label_45f0d4;
        case 0x45f0d8u: goto label_45f0d8;
        case 0x45f0dcu: goto label_45f0dc;
        case 0x45f0e0u: goto label_45f0e0;
        case 0x45f0e4u: goto label_45f0e4;
        case 0x45f0e8u: goto label_45f0e8;
        case 0x45f0ecu: goto label_45f0ec;
        case 0x45f0f0u: goto label_45f0f0;
        case 0x45f0f4u: goto label_45f0f4;
        case 0x45f0f8u: goto label_45f0f8;
        case 0x45f0fcu: goto label_45f0fc;
        case 0x45f100u: goto label_45f100;
        case 0x45f104u: goto label_45f104;
        case 0x45f108u: goto label_45f108;
        case 0x45f10cu: goto label_45f10c;
        case 0x45f110u: goto label_45f110;
        case 0x45f114u: goto label_45f114;
        case 0x45f118u: goto label_45f118;
        case 0x45f11cu: goto label_45f11c;
        case 0x45f120u: goto label_45f120;
        case 0x45f124u: goto label_45f124;
        case 0x45f128u: goto label_45f128;
        case 0x45f12cu: goto label_45f12c;
        case 0x45f130u: goto label_45f130;
        case 0x45f134u: goto label_45f134;
        case 0x45f138u: goto label_45f138;
        case 0x45f13cu: goto label_45f13c;
        case 0x45f140u: goto label_45f140;
        case 0x45f144u: goto label_45f144;
        case 0x45f148u: goto label_45f148;
        case 0x45f14cu: goto label_45f14c;
        default: break;
    }

    ctx->pc = 0x45f050u;

label_45f050:
    // 0x45f050: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x45f050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_45f054:
    // 0x45f054: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x45f054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_45f058:
    // 0x45f058: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x45f058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
label_45f05c:
    // 0x45f05c: 0xafa50150  sw          $a1, 0x150($sp)
    ctx->pc = 0x45f05cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 5));
label_45f060:
    // 0x45f060: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x45f060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_45f064:
    // 0x45f064: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_45f068:
    if (ctx->pc == 0x45F068u) {
        ctx->pc = 0x45F06Cu;
        goto label_45f06c;
    }
    ctx->pc = 0x45F064u;
    {
        const bool branch_taken_0x45f064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45f064) {
            ctx->pc = 0x45F114u;
            goto label_45f114;
        }
    }
    ctx->pc = 0x45F06Cu;
label_45f06c:
    // 0x45f06c: 0x8f82b194  lw          $v0, -0x4E6C($gp)
    ctx->pc = 0x45f06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947220)));
label_45f070:
    // 0x45f070: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_45f074:
    if (ctx->pc == 0x45F074u) {
        ctx->pc = 0x45F078u;
        goto label_45f078;
    }
    ctx->pc = 0x45F070u;
    {
        const bool branch_taken_0x45f070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45f070) {
            ctx->pc = 0x45F114u;
            goto label_45f114;
        }
    }
    ctx->pc = 0x45F078u;
label_45f078:
    // 0x45f078: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x45f078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_45f07c:
    // 0x45f07c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x45f07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_45f080:
    // 0x45f080: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x45f080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_45f084:
    // 0x45f084: 0xc115ee8  jal         func_457BA0
label_45f088:
    if (ctx->pc == 0x45F088u) {
        ctx->pc = 0x45F08Cu;
        goto label_45f08c;
    }
    ctx->pc = 0x45F084u;
    SET_GPR_U32(ctx, 31, 0x45F08Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x45F084u, 0x45F08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45F08Cu;
label_45f08c:
    // 0x45f08c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_45f090:
    if (ctx->pc == 0x45F090u) {
        ctx->pc = 0x45F094u;
        goto label_45f094;
    }
    ctx->pc = 0x45F08Cu;
    {
        const bool branch_taken_0x45f08c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45f08c) {
            ctx->pc = 0x45F114u;
            goto label_45f114;
        }
    }
    ctx->pc = 0x45F094u;
label_45f094:
    // 0x45f094: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x45f094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_45f098:
    // 0x45f098: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_45f09c:
    if (ctx->pc == 0x45F09Cu) {
        ctx->pc = 0x45F0A0u;
        goto label_45f0a0;
    }
    ctx->pc = 0x45F098u;
    {
        const bool branch_taken_0x45f098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45f098) {
            ctx->pc = 0x45F114u;
            goto label_45f114;
        }
    }
    ctx->pc = 0x45F0A0u;
label_45f0a0:
    // 0x45f0a0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x45f0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_45f0a4:
    // 0x45f0a4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x45f0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_45f0a8:
    // 0x45f0a8: 0x8fa60134  lw          $a2, 0x134($sp)
    ctx->pc = 0x45f0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_45f0ac:
    // 0x45f0ac: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x45f0acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_45f0b0:
    // 0x45f0b0: 0x24e7ed20  addiu       $a3, $a3, -0x12E0
    ctx->pc = 0x45f0b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962464));
label_45f0b4:
    // 0x45f0b4: 0x24080163  addiu       $t0, $zero, 0x163
    ctx->pc = 0x45f0b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 355));
label_45f0b8:
    // 0x45f0b8: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x45f0b8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_45f0bc:
    // 0x45f0bc: 0x2529ed40  addiu       $t1, $t1, -0x12C0
    ctx->pc = 0x45f0bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294962496));
label_45f0c0:
    // 0x45f0c0: 0xc113940  jal         func_44E500
label_45f0c4:
    if (ctx->pc == 0x45F0C4u) {
        ctx->pc = 0x45F0C8u;
        goto label_45f0c8;
    }
    ctx->pc = 0x45F0C0u;
    SET_GPR_U32(ctx, 31, 0x45F0C8u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x45F0C0u, 0x45F0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45F0C8u;
label_45f0c8:
    // 0x45f0c8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x45f0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_45f0cc:
    // 0x45f0cc: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x45f0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_45f0d0:
    // 0x45f0d0: 0x24a5ed50  addiu       $a1, $a1, -0x12B0
    ctx->pc = 0x45f0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962512));
label_45f0d4:
    // 0x45f0d4: 0xc115c24  jal         func_457090
label_45f0d8:
    if (ctx->pc == 0x45F0D8u) {
        ctx->pc = 0x45F0DCu;
        goto label_45f0dc;
    }
    ctx->pc = 0x45F0D4u;
    SET_GPR_U32(ctx, 31, 0x45F0DCu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x45F0D4u, 0x45F0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45F0DCu;
label_45f0dc:
    // 0x45f0dc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x45f0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_45f0e0:
    // 0x45f0e0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x45f0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_45f0e4:
    // 0x45f0e4: 0x40f809  jalr        $v0
label_45f0e8:
    if (ctx->pc == 0x45F0E8u) {
        ctx->pc = 0x45F0ECu;
        goto label_45f0ec;
    }
    ctx->pc = 0x45F0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45F0ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45F0E4u, 0x45F0ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45F0ECu;
label_45f0ec:
    // 0x45f0ec: 0xaf82b194  sw          $v0, -0x4E6C($gp)
    ctx->pc = 0x45f0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947220), GPR_U32(ctx, 2));
label_45f0f0:
    // 0x45f0f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x45f0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_45f0f4:
    // 0x45f0f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_45f0f8:
    if (ctx->pc == 0x45F0F8u) {
        ctx->pc = 0x45F0FCu;
        goto label_45f0fc;
    }
    ctx->pc = 0x45F0F4u;
    {
        const bool branch_taken_0x45f0f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45f0f4) {
            ctx->pc = 0x45F104u;
            goto label_45f104;
        }
    }
    ctx->pc = 0x45F0FCu;
label_45f0fc:
    // 0x45f0fc: 0xd  break       0
    ctx->pc = 0x45f0fcu;
    runtime->handleBreak(rdram, ctx);
label_45f100:
    // 0x45f100: 0x0  nop
    ctx->pc = 0x45f100u;
    // NOP
label_45f104:
    // 0x45f104: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x45f104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_45f108:
    // 0x45f108: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x45f108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45f10c:
    // 0x45f10c: 0xc11392c  jal         func_44E4B0
label_45f110:
    if (ctx->pc == 0x45F110u) {
        ctx->pc = 0x45F114u;
        goto label_45f114;
    }
    ctx->pc = 0x45F10Cu;
    SET_GPR_U32(ctx, 31, 0x45F114u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x45F10Cu, 0x45F114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45F114u;
label_45f114:
    // 0x45f114: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x45f114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_45f118:
    // 0x45f118: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x45f118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_45f11c:
    // 0x45f11c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45f11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45f120:
    // 0x45f120: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45f120u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45f124:
    // 0x45f124: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45f124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45f128:
    // 0x45f128: 0x24424d20  addiu       $v0, $v0, 0x4D20
    ctx->pc = 0x45f128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19744));
label_45f12c:
    // 0x45f12c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x45f12cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45f130:
    // 0x45f130: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x45f130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_45f134:
    // 0x45f134: 0xc117c54  jal         func_45F150
label_45f138:
    if (ctx->pc == 0x45F138u) {
        ctx->pc = 0x45F13Cu;
        goto label_45f13c;
    }
    ctx->pc = 0x45F134u;
    SET_GPR_U32(ctx, 31, 0x45F13Cu);
    ctx->pc = 0x45F150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45F150u, 0x45F134u, 0x45F13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45F13Cu;
label_45f13c:
    // 0x45f13c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x45f13cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_45f140:
    // 0x45f140: 0x27bd0160  addiu       $sp, $sp, 0x160
    ctx->pc = 0x45f140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_45f144:
    // 0x45f144: 0x3e00008  jr          $ra
label_45f148:
    if (ctx->pc == 0x45F148u) {
        ctx->pc = 0x45F14Cu;
        goto label_45f14c;
    }
    ctx->pc = 0x45F144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45F144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45F14Cu;
label_45f14c:
    // 0x45f14c: 0x0  nop
    ctx->pc = 0x45f14cu;
    // NOP
    ctx->pc = 0x45f150u;
}
