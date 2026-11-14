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

// Function: sub_00228900
// Address: 0x228900 - 0x228bb0
void sub_00228900_0x228900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228900_0x228900");
#endif

    switch (ctx->pc) {
        case 0x228940u: goto label_228940;
        case 0x228954u: goto label_228954;
        case 0x22895cu: goto label_22895c;
        case 0x228978u: goto label_228978;
        case 0x228988u: goto label_228988;
        case 0x22899cu: goto label_22899c;
        case 0x2289b8u: goto label_2289b8;
        case 0x2289d0u: goto label_2289d0;
        case 0x2289e8u: goto label_2289e8;
        case 0x2289fcu: goto label_2289fc;
        case 0x228a18u: goto label_228a18;
        case 0x228a3cu: goto label_228a3c;
        case 0x228a4cu: goto label_228a4c;
        case 0x228a5cu: goto label_228a5c;
        case 0x228a70u: goto label_228a70;
        case 0x228a84u: goto label_228a84;
        case 0x228a94u: goto label_228a94;
        case 0x228aa4u: goto label_228aa4;
        case 0x228ab4u: goto label_228ab4;
        case 0x228ac4u: goto label_228ac4;
        case 0x228ad8u: goto label_228ad8;
        case 0x228aecu: goto label_228aec;
        case 0x228afcu: goto label_228afc;
        case 0x228b10u: goto label_228b10;
        case 0x228b24u: goto label_228b24;
        case 0x228b34u: goto label_228b34;
        case 0x228b48u: goto label_228b48;
        case 0x228b58u: goto label_228b58;
        case 0x228b68u: goto label_228b68;
        case 0x228b78u: goto label_228b78;
        case 0x228b8cu: goto label_228b8c;
        default: break;
    }

    ctx->pc = 0x228900u;

    // 0x228900: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x228900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x228904: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x228904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x228908: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x228908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22890c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x22890cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x228910: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x228910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228914: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x228914u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x228918: 0x3e00008  jr          $ra
    ctx->pc = 0x228918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228920u;
    // 0x228920: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x228920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x228924: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x228924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x228928: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x228928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22892c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x22892cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x228930: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x228930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x228934: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x228934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228938: 0xc08ec5c  jal         func_23B170
    ctx->pc = 0x228938u;
    SET_GPR_U32(ctx, 31, 0x228940u);
    ctx->pc = 0x23B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B170u, 0x228938u, 0x228940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228940u;
label_228940:
    // 0x228940: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x228940u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x228944: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x228944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228948: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x228948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x22894c: 0xc08a2ec  jal         func_228BB0
    ctx->pc = 0x22894Cu;
    SET_GPR_U32(ctx, 31, 0x228954u);
    ctx->pc = 0x228BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228BB0u, 0x22894Cu, 0x228954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228954u;
label_228954:
    // 0x228954: 0xc122430  jal         func_4890C0
    ctx->pc = 0x228954u;
    SET_GPR_U32(ctx, 31, 0x22895Cu);
    ctx->pc = 0x4890C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890C0u, 0x228954u, 0x22895Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22895Cu;
label_22895c:
    // 0x22895c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x22895cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228960: 0xac620034  sw          $v0, 0x34($v1)
    ctx->pc = 0x228960u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
    // 0x228964: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x228964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228968: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x228968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x22896c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x22896cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x228970: 0xc12089c  jal         func_482270
    ctx->pc = 0x228970u;
    SET_GPR_U32(ctx, 31, 0x228978u);
    ctx->pc = 0x482270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482270u, 0x228970u, 0x228978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228978u;
label_228978:
    // 0x228978: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x228978u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x22897c: 0x2484b5d0  addiu       $a0, $a0, -0x4A30
    ctx->pc = 0x22897cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948304));
    // 0x228980: 0xc107156  jal         func_41C558
    ctx->pc = 0x228980u;
    SET_GPR_U32(ctx, 31, 0x228988u);
    ctx->pc = 0x41C558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C558u, 0x228980u, 0x228988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228988u;
label_228988:
    // 0x228988: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x228988u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x22898c: 0x2484b600  addiu       $a0, $a0, -0x4A00
    ctx->pc = 0x22898cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948352));
    // 0x228990: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x228990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228994: 0xc107fa4  jal         func_41FE90
    ctx->pc = 0x228994u;
    SET_GPR_U32(ctx, 31, 0x22899Cu);
    ctx->pc = 0x41FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41FE90u, 0x228994u, 0x22899Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22899Cu;
label_22899c:
    // 0x22899c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x22899cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2289a0: 0xac620038  sw          $v0, 0x38($v1)
    ctx->pc = 0x2289a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
    // 0x2289a4: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x2289a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x2289a8: 0x2484b620  addiu       $a0, $a0, -0x49E0
    ctx->pc = 0x2289a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948384));
    // 0x2289ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2289acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2289b0: 0xc107fa4  jal         func_41FE90
    ctx->pc = 0x2289B0u;
    SET_GPR_U32(ctx, 31, 0x2289B8u);
    ctx->pc = 0x41FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41FE90u, 0x2289B0u, 0x2289B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2289B8u;
label_2289b8:
    // 0x2289b8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2289b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2289bc: 0xac62003c  sw          $v0, 0x3C($v1)
    ctx->pc = 0x2289bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 2));
    // 0x2289c0: 0x27849c98  addiu       $a0, $gp, -0x6368
    ctx->pc = 0x2289c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941848));
    // 0x2289c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2289c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2289c8: 0xc107fa4  jal         func_41FE90
    ctx->pc = 0x2289C8u;
    SET_GPR_U32(ctx, 31, 0x2289D0u);
    ctx->pc = 0x41FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41FE90u, 0x2289C8u, 0x2289D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2289D0u;
label_2289d0:
    // 0x2289d0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2289d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2289d4: 0xac620048  sw          $v0, 0x48($v1)
    ctx->pc = 0x2289d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
    // 0x2289d8: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x2289d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x2289dc: 0x2484b630  addiu       $a0, $a0, -0x49D0
    ctx->pc = 0x2289dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948400));
    // 0x2289e0: 0xc107156  jal         func_41C558
    ctx->pc = 0x2289E0u;
    SET_GPR_U32(ctx, 31, 0x2289E8u);
    ctx->pc = 0x41C558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C558u, 0x2289E0u, 0x2289E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2289E8u;
label_2289e8:
    // 0x2289e8: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x2289e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x2289ec: 0x2484b650  addiu       $a0, $a0, -0x49B0
    ctx->pc = 0x2289ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948432));
    // 0x2289f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2289f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2289f4: 0xc107fa4  jal         func_41FE90
    ctx->pc = 0x2289F4u;
    SET_GPR_U32(ctx, 31, 0x2289FCu);
    ctx->pc = 0x41FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41FE90u, 0x2289F4u, 0x2289FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2289FCu;
label_2289fc:
    // 0x2289fc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2289fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228a00: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x228a00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
    // 0x228a04: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x228a04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x228a08: 0x2484b670  addiu       $a0, $a0, -0x4990
    ctx->pc = 0x228a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948464));
    // 0x228a0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x228a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228a10: 0xc107fa4  jal         func_41FE90
    ctx->pc = 0x228A10u;
    SET_GPR_U32(ctx, 31, 0x228A18u);
    ctx->pc = 0x41FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41FE90u, 0x228A10u, 0x228A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228A18u;
label_228a18:
    // 0x228a18: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x228a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228a1c: 0xac620044  sw          $v0, 0x44($v1)
    ctx->pc = 0x228a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 2));
    // 0x228a20: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x228a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228a24: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x228a24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x228a28: 0x24a5b688  addiu       $a1, $a1, -0x4978
    ctx->pc = 0x228a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948488));
    // 0x228a2c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x228a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x228a30: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x228a30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228a34: 0xc08a320  jal         func_228C80
    ctx->pc = 0x228A34u;
    SET_GPR_U32(ctx, 31, 0x228A3Cu);
    ctx->pc = 0x228C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228C80u, 0x228A34u, 0x228A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228A3Cu;
label_228a3c:
    // 0x228a3c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x228a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228a40: 0x27859ca0  addiu       $a1, $gp, -0x6360
    ctx->pc = 0x228a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941856));
    // 0x228a44: 0xc08a78c  jal         func_229E30
    ctx->pc = 0x228A44u;
    SET_GPR_U32(ctx, 31, 0x228A4Cu);
    ctx->pc = 0x229E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229E30u, 0x228A44u, 0x228A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228A4Cu;
label_228a4c:
    // 0x228a4c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x228a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228a50: 0x27859ca8  addiu       $a1, $gp, -0x6358
    ctx->pc = 0x228a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941864));
    // 0x228a54: 0xc08a78c  jal         func_229E30
    ctx->pc = 0x228A54u;
    SET_GPR_U32(ctx, 31, 0x228A5Cu);
    ctx->pc = 0x229E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229E30u, 0x228A54u, 0x228A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228A5Cu;
label_228a5c:
    // 0x228a5c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x228a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228a60: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x228a60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x228a64: 0x24a5b698  addiu       $a1, $a1, -0x4968
    ctx->pc = 0x228a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948504));
    // 0x228a68: 0xc08a78c  jal         func_229E30
    ctx->pc = 0x228A68u;
    SET_GPR_U32(ctx, 31, 0x228A70u);
    ctx->pc = 0x229E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229E30u, 0x228A68u, 0x228A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228A70u;
label_228a70:
    // 0x228a70: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x228a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228a74: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x228a74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x228a78: 0x24a5b6a8  addiu       $a1, $a1, -0x4958
    ctx->pc = 0x228a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948520));
    // 0x228a7c: 0xc08a78c  jal         func_229E30
    ctx->pc = 0x228A7Cu;
    SET_GPR_U32(ctx, 31, 0x228A84u);
    ctx->pc = 0x229E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229E30u, 0x228A7Cu, 0x228A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228A84u;
label_228a84:
    // 0x228a84: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x228a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228a88: 0x27859cb0  addiu       $a1, $gp, -0x6350
    ctx->pc = 0x228a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941872));
    // 0x228a8c: 0xc08a78c  jal         func_229E30
    ctx->pc = 0x228A8Cu;
    SET_GPR_U32(ctx, 31, 0x228A94u);
    ctx->pc = 0x229E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229E30u, 0x228A8Cu, 0x228A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228A94u;
label_228a94:
    // 0x228a94: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x228a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228a98: 0x27859cb8  addiu       $a1, $gp, -0x6348
    ctx->pc = 0x228a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941880));
    // 0x228a9c: 0xc08a78c  jal         func_229E30
    ctx->pc = 0x228A9Cu;
    SET_GPR_U32(ctx, 31, 0x228AA4u);
    ctx->pc = 0x229E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229E30u, 0x228A9Cu, 0x228AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228AA4u;
label_228aa4:
    // 0x228aa4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x228aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228aa8: 0x27859cc0  addiu       $a1, $gp, -0x6340
    ctx->pc = 0x228aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941888));
    // 0x228aac: 0xc08a78c  jal         func_229E30
    ctx->pc = 0x228AACu;
    SET_GPR_U32(ctx, 31, 0x228AB4u);
    ctx->pc = 0x229E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229E30u, 0x228AACu, 0x228AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228AB4u;
label_228ab4:
    // 0x228ab4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x228ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228ab8: 0x27859cc8  addiu       $a1, $gp, -0x6338
    ctx->pc = 0x228ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941896));
    // 0x228abc: 0xc08a78c  jal         func_229E30
    ctx->pc = 0x228ABCu;
    SET_GPR_U32(ctx, 31, 0x228AC4u);
    ctx->pc = 0x229E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229E30u, 0x228ABCu, 0x228AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228AC4u;
label_228ac4:
    // 0x228ac4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x228ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228ac8: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x228ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x228acc: 0x24a5b6b8  addiu       $a1, $a1, -0x4948
    ctx->pc = 0x228accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948536));
    // 0x228ad0: 0xc08a78c  jal         func_229E30
    ctx->pc = 0x228AD0u;
    SET_GPR_U32(ctx, 31, 0x228AD8u);
    ctx->pc = 0x229E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229E30u, 0x228AD0u, 0x228AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228AD8u;
label_228ad8:
    // 0x228ad8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x228ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228adc: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x228adcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x228ae0: 0x24a5b6c8  addiu       $a1, $a1, -0x4938
    ctx->pc = 0x228ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948552));
    // 0x228ae4: 0xc08a78c  jal         func_229E30
    ctx->pc = 0x228AE4u;
    SET_GPR_U32(ctx, 31, 0x228AECu);
    ctx->pc = 0x229E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229E30u, 0x228AE4u, 0x228AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228AECu;
label_228aec:
    // 0x228aec: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x228aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228af0: 0x27859cd0  addiu       $a1, $gp, -0x6330
    ctx->pc = 0x228af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941904));
    // 0x228af4: 0xc08a78c  jal         func_229E30
    ctx->pc = 0x228AF4u;
    SET_GPR_U32(ctx, 31, 0x228AFCu);
    ctx->pc = 0x229E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229E30u, 0x228AF4u, 0x228AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228AFCu;
label_228afc:
    // 0x228afc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x228afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228b00: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x228b00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x228b04: 0x24a5b6d8  addiu       $a1, $a1, -0x4928
    ctx->pc = 0x228b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948568));
    // 0x228b08: 0xc08a78c  jal         func_229E30
    ctx->pc = 0x228B08u;
    SET_GPR_U32(ctx, 31, 0x228B10u);
    ctx->pc = 0x229E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229E30u, 0x228B08u, 0x228B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228B10u;
label_228b10:
    // 0x228b10: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x228b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228b14: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x228b14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x228b18: 0x24a5b6e8  addiu       $a1, $a1, -0x4918
    ctx->pc = 0x228b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948584));
    // 0x228b1c: 0xc08a78c  jal         func_229E30
    ctx->pc = 0x228B1Cu;
    SET_GPR_U32(ctx, 31, 0x228B24u);
    ctx->pc = 0x229E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229E30u, 0x228B1Cu, 0x228B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228B24u;
label_228b24:
    // 0x228b24: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x228b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228b28: 0x27859cd8  addiu       $a1, $gp, -0x6328
    ctx->pc = 0x228b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941912));
    // 0x228b2c: 0xc08a78c  jal         func_229E30
    ctx->pc = 0x228B2Cu;
    SET_GPR_U32(ctx, 31, 0x228B34u);
    ctx->pc = 0x229E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229E30u, 0x228B2Cu, 0x228B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228B34u;
label_228b34:
    // 0x228b34: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x228b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228b38: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x228b38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x228b3c: 0x24a5b6f8  addiu       $a1, $a1, -0x4908
    ctx->pc = 0x228b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948600));
    // 0x228b40: 0xc08a78c  jal         func_229E30
    ctx->pc = 0x228B40u;
    SET_GPR_U32(ctx, 31, 0x228B48u);
    ctx->pc = 0x229E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229E30u, 0x228B40u, 0x228B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228B48u;
label_228b48:
    // 0x228b48: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x228b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228b4c: 0x27859ce0  addiu       $a1, $gp, -0x6320
    ctx->pc = 0x228b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941920));
    // 0x228b50: 0xc08a78c  jal         func_229E30
    ctx->pc = 0x228B50u;
    SET_GPR_U32(ctx, 31, 0x228B58u);
    ctx->pc = 0x229E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229E30u, 0x228B50u, 0x228B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228B58u;
label_228b58:
    // 0x228b58: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x228b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228b5c: 0x27859ce8  addiu       $a1, $gp, -0x6318
    ctx->pc = 0x228b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941928));
    // 0x228b60: 0xc08a78c  jal         func_229E30
    ctx->pc = 0x228B60u;
    SET_GPR_U32(ctx, 31, 0x228B68u);
    ctx->pc = 0x229E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229E30u, 0x228B60u, 0x228B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228B68u;
label_228b68:
    // 0x228b68: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x228b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228b6c: 0x27859cf0  addiu       $a1, $gp, -0x6310
    ctx->pc = 0x228b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941936));
    // 0x228b70: 0xc08a78c  jal         func_229E30
    ctx->pc = 0x228B70u;
    SET_GPR_U32(ctx, 31, 0x228B78u);
    ctx->pc = 0x229E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229E30u, 0x228B70u, 0x228B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228B78u;
label_228b78:
    // 0x228b78: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x228b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228b7c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x228b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x228b80: 0x24a5b708  addiu       $a1, $a1, -0x48F8
    ctx->pc = 0x228b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948616));
    // 0x228b84: 0xc08a78c  jal         func_229E30
    ctx->pc = 0x228B84u;
    SET_GPR_U32(ctx, 31, 0x228B8Cu);
    ctx->pc = 0x229E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229E30u, 0x228B84u, 0x228B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228B8Cu;
label_228b8c:
    // 0x228b8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x228b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228b90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x228b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228b94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x228b94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228b98: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x228b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x228b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x228B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228BA4u;
    // 0x228ba4: 0x0  nop
    ctx->pc = 0x228ba4u;
    // NOP
    // 0x228ba8: 0x0  nop
    ctx->pc = 0x228ba8u;
    // NOP
    // 0x228bac: 0x0  nop
    ctx->pc = 0x228bacu;
    // NOP
    ctx->pc = 0x228bb0u;
}
