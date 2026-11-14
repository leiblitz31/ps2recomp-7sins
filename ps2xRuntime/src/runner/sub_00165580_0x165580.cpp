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

// Function: sub_00165580
// Address: 0x165580 - 0x165660
void sub_00165580_0x165580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165580_0x165580");
#endif

    switch (ctx->pc) {
        case 0x1655b8u: goto label_1655b8;
        case 0x1655ccu: goto label_1655cc;
        case 0x1655e0u: goto label_1655e0;
        case 0x1655fcu: goto label_1655fc;
        case 0x16560cu: goto label_16560c;
        case 0x165628u: goto label_165628;
        case 0x165644u: goto label_165644;
        default: break;
    }

    ctx->pc = 0x165580u;

    // 0x165580: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x165580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x165584: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x165584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x165588: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x165588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x16558c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x16558cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x165590: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x165590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x165594: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x165594u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x165598: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x165598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x16559c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x16559cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1655a0: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x1655a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1655a4: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1655A4u;
    {
        const bool branch_taken_0x1655a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1655a4) {
            ctx->pc = 0x165614u;
            goto label_165614;
        }
    }
    ctx->pc = 0x1655ACu;
    // 0x1655ac: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1655acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1655b0: 0xc0495d4  jal         func_125750
    ctx->pc = 0x1655B0u;
    SET_GPR_U32(ctx, 31, 0x1655B8u);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x1655B0u, 0x1655B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1655B8u;
label_1655b8:
    // 0x1655b8: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1655b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x1655bc: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1655bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1655c0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1655c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1655c4: 0xc08e514  jal         func_239450
    ctx->pc = 0x1655C4u;
    SET_GPR_U32(ctx, 31, 0x1655CCu);
    ctx->pc = 0x239450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239450u, 0x1655C4u, 0x1655CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1655CCu;
label_1655cc:
    // 0x1655cc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1655ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1655d0: 0x2444008c  addiu       $a0, $v0, 0x8C
    ctx->pc = 0x1655d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x1655d4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1655d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1655d8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1655D8u;
    SET_GPR_U32(ctx, 31, 0x1655E0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1655D8u, 0x1655E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1655E0u;
label_1655e0:
    // 0x1655e0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1655e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1655e4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1655e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1655e8: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1655e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1655ec: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1655ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1655f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1655f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1655f4: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x1655F4u;
    SET_GPR_U32(ctx, 31, 0x1655FCu);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x1655F4u, 0x1655FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1655FCu;
label_1655fc:
    // 0x1655fc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1655fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x165600: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x165600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x165604: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x165604u;
    SET_GPR_U32(ctx, 31, 0x16560Cu);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x165604u, 0x16560Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16560Cu;
label_16560c:
    // 0x16560c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x16560Cu;
    {
        const bool branch_taken_0x16560c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16560c) {
            ctx->pc = 0x165644u;
            goto label_165644;
        }
    }
    ctx->pc = 0x165614u;
label_165614:
    // 0x165614: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x165614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165618: 0x2444008c  addiu       $a0, $v0, 0x8C
    ctx->pc = 0x165618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x16561c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x16561cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x165620: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x165620u;
    SET_GPR_U32(ctx, 31, 0x165628u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x165620u, 0x165628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165628u;
label_165628:
    // 0x165628: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x165628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16562c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x16562cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165630: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x165630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x165634: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x165634u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x165638: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x165638u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16563c: 0xc08c32c  jal         func_230CB0
    ctx->pc = 0x16563Cu;
    SET_GPR_U32(ctx, 31, 0x165644u);
    ctx->pc = 0x230CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230CB0u, 0x16563Cu, 0x165644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165644u;
label_165644:
    // 0x165644: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x165644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165648: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x165648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16564c: 0x3e00008  jr          $ra
    ctx->pc = 0x16564Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16564Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165654u;
    // 0x165654: 0x0  nop
    ctx->pc = 0x165654u;
    // NOP
    // 0x165658: 0x0  nop
    ctx->pc = 0x165658u;
    // NOP
    // 0x16565c: 0x0  nop
    ctx->pc = 0x16565cu;
    // NOP
    ctx->pc = 0x165660u;
}
