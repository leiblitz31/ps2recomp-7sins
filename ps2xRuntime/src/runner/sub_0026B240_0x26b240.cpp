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

// Function: sub_0026B240
// Address: 0x26b240 - 0x26b4c0
void sub_0026B240_0x26b240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026B240_0x26b240");
#endif

    switch (ctx->pc) {
        case 0x26b25cu: goto label_26b25c;
        case 0x26b27cu: goto label_26b27c;
        case 0x26b28cu: goto label_26b28c;
        case 0x26b29cu: goto label_26b29c;
        case 0x26b2acu: goto label_26b2ac;
        case 0x26b2bcu: goto label_26b2bc;
        case 0x26b2ccu: goto label_26b2cc;
        case 0x26b2dcu: goto label_26b2dc;
        case 0x26b2ecu: goto label_26b2ec;
        case 0x26b2fcu: goto label_26b2fc;
        case 0x26b350u: goto label_26b350;
        case 0x26b364u: goto label_26b364;
        case 0x26b378u: goto label_26b378;
        case 0x26b38cu: goto label_26b38c;
        case 0x26b3a0u: goto label_26b3a0;
        case 0x26b3b4u: goto label_26b3b4;
        case 0x26b3c8u: goto label_26b3c8;
        case 0x26b3dcu: goto label_26b3dc;
        case 0x26b3ecu: goto label_26b3ec;
        case 0x26b40cu: goto label_26b40c;
        case 0x26b438u: goto label_26b438;
        case 0x26b470u: goto label_26b470;
        case 0x26b47cu: goto label_26b47c;
        case 0x26b4a8u: goto label_26b4a8;
        default: break;
    }

    ctx->pc = 0x26b240u;

    // 0x26b240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26b240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26b244: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26b244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26b248: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x26b248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x26b24c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x26b24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b250: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x26b250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x26b254: 0xc091174  jal         func_2445D0
    ctx->pc = 0x26B254u;
    SET_GPR_U32(ctx, 31, 0x26B25Cu);
    ctx->pc = 0x2445D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2445D0u, 0x26B254u, 0x26B25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B25Cu;
label_26b25c:
    // 0x26b25c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x26b25cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x26b260: 0x24635a10  addiu       $v1, $v1, 0x5A10
    ctx->pc = 0x26b260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23056));
    // 0x26b264: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26b264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b268: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x26b268u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x26b26c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26b26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b270: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x26b270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x26b274: 0xc0480a4  jal         func_120290
    ctx->pc = 0x26B274u;
    SET_GPR_U32(ctx, 31, 0x26B27Cu);
    ctx->pc = 0x120290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120290u, 0x26B274u, 0x26B27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B27Cu;
label_26b27c:
    // 0x26b27c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26b27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b280: 0x24440044  addiu       $a0, $v0, 0x44
    ctx->pc = 0x26b280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    // 0x26b284: 0xc08d5f4  jal         func_2357D0
    ctx->pc = 0x26B284u;
    SET_GPR_U32(ctx, 31, 0x26B28Cu);
    ctx->pc = 0x2357D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2357D0u, 0x26B284u, 0x26B28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B28Cu;
label_26b28c:
    // 0x26b28c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26b28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b290: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x26b290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x26b294: 0xc0480a4  jal         func_120290
    ctx->pc = 0x26B294u;
    SET_GPR_U32(ctx, 31, 0x26B29Cu);
    ctx->pc = 0x120290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120290u, 0x26B294u, 0x26B29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B29Cu;
label_26b29c:
    // 0x26b29c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26b29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b2a0: 0x2444007c  addiu       $a0, $v0, 0x7C
    ctx->pc = 0x26b2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
    // 0x26b2a4: 0xc0480a4  jal         func_120290
    ctx->pc = 0x26B2A4u;
    SET_GPR_U32(ctx, 31, 0x26B2ACu);
    ctx->pc = 0x120290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120290u, 0x26B2A4u, 0x26B2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B2ACu;
label_26b2ac:
    // 0x26b2ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26b2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b2b0: 0x24440088  addiu       $a0, $v0, 0x88
    ctx->pc = 0x26b2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
    // 0x26b2b4: 0xc0480a4  jal         func_120290
    ctx->pc = 0x26B2B4u;
    SET_GPR_U32(ctx, 31, 0x26B2BCu);
    ctx->pc = 0x120290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120290u, 0x26B2B4u, 0x26B2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B2BCu;
label_26b2bc:
    // 0x26b2bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26b2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b2c0: 0x24440094  addiu       $a0, $v0, 0x94
    ctx->pc = 0x26b2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
    // 0x26b2c4: 0xc0480a4  jal         func_120290
    ctx->pc = 0x26B2C4u;
    SET_GPR_U32(ctx, 31, 0x26B2CCu);
    ctx->pc = 0x120290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120290u, 0x26B2C4u, 0x26B2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B2CCu;
label_26b2cc:
    // 0x26b2cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26b2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b2d0: 0x244400a0  addiu       $a0, $v0, 0xA0
    ctx->pc = 0x26b2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x26b2d4: 0xc0480a4  jal         func_120290
    ctx->pc = 0x26B2D4u;
    SET_GPR_U32(ctx, 31, 0x26B2DCu);
    ctx->pc = 0x120290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120290u, 0x26B2D4u, 0x26B2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B2DCu;
label_26b2dc:
    // 0x26b2dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26b2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b2e0: 0x244400ac  addiu       $a0, $v0, 0xAC
    ctx->pc = 0x26b2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 172));
    // 0x26b2e4: 0xc0480a4  jal         func_120290
    ctx->pc = 0x26B2E4u;
    SET_GPR_U32(ctx, 31, 0x26B2ECu);
    ctx->pc = 0x120290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120290u, 0x26B2E4u, 0x26B2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B2ECu;
label_26b2ec:
    // 0x26b2ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26b2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b2f0: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x26b2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x26b2f4: 0xc0480a4  jal         func_120290
    ctx->pc = 0x26B2F4u;
    SET_GPR_U32(ctx, 31, 0x26B2FCu);
    ctx->pc = 0x120290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120290u, 0x26B2F4u, 0x26B2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B2FCu;
label_26b2fc:
    // 0x26b2fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26b2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b300: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26b300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b304: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x26b304u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26b308: 0x3e00008  jr          $ra
    ctx->pc = 0x26B308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26B310u;
    // 0x26b310: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26b310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26b314: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26b314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26b318: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x26b318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x26b31c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x26b31cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x26b320: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26b320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b324: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x26B324u;
    {
        const bool branch_taken_0x26b324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b324) {
            ctx->pc = 0x26B40Cu;
            goto label_26b40c;
        }
    }
    ctx->pc = 0x26B32Cu;
    // 0x26b32c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x26b32cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x26b330: 0x24635a10  addiu       $v1, $v1, 0x5A10
    ctx->pc = 0x26b330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23056));
    // 0x26b334: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26b334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b338: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x26b338u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x26b33c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26b33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b340: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x26b340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x26b344: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x26b344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26b348: 0xc048004  jal         func_120010
    ctx->pc = 0x26B348u;
    SET_GPR_U32(ctx, 31, 0x26B350u);
    ctx->pc = 0x120010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120010u, 0x26B348u, 0x26B350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B350u;
label_26b350:
    // 0x26b350: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26b350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b354: 0x244400ac  addiu       $a0, $v0, 0xAC
    ctx->pc = 0x26b354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 172));
    // 0x26b358: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x26b358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26b35c: 0xc048004  jal         func_120010
    ctx->pc = 0x26B35Cu;
    SET_GPR_U32(ctx, 31, 0x26B364u);
    ctx->pc = 0x120010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120010u, 0x26B35Cu, 0x26B364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B364u;
label_26b364:
    // 0x26b364: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26b364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b368: 0x244400a0  addiu       $a0, $v0, 0xA0
    ctx->pc = 0x26b368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x26b36c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x26b36cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26b370: 0xc048004  jal         func_120010
    ctx->pc = 0x26B370u;
    SET_GPR_U32(ctx, 31, 0x26B378u);
    ctx->pc = 0x120010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120010u, 0x26B370u, 0x26B378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B378u;
label_26b378:
    // 0x26b378: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26b378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b37c: 0x24440094  addiu       $a0, $v0, 0x94
    ctx->pc = 0x26b37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
    // 0x26b380: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x26b380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26b384: 0xc048004  jal         func_120010
    ctx->pc = 0x26B384u;
    SET_GPR_U32(ctx, 31, 0x26B38Cu);
    ctx->pc = 0x120010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120010u, 0x26B384u, 0x26B38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B38Cu;
label_26b38c:
    // 0x26b38c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26b38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b390: 0x24440088  addiu       $a0, $v0, 0x88
    ctx->pc = 0x26b390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
    // 0x26b394: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x26b394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26b398: 0xc048004  jal         func_120010
    ctx->pc = 0x26B398u;
    SET_GPR_U32(ctx, 31, 0x26B3A0u);
    ctx->pc = 0x120010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120010u, 0x26B398u, 0x26B3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B3A0u;
label_26b3a0:
    // 0x26b3a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26b3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b3a4: 0x2444007c  addiu       $a0, $v0, 0x7C
    ctx->pc = 0x26b3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
    // 0x26b3a8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x26b3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26b3ac: 0xc048004  jal         func_120010
    ctx->pc = 0x26B3ACu;
    SET_GPR_U32(ctx, 31, 0x26B3B4u);
    ctx->pc = 0x120010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120010u, 0x26B3ACu, 0x26B3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B3B4u;
label_26b3b4:
    // 0x26b3b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26b3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b3b8: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x26b3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x26b3bc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x26b3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26b3c0: 0xc048004  jal         func_120010
    ctx->pc = 0x26B3C0u;
    SET_GPR_U32(ctx, 31, 0x26B3C8u);
    ctx->pc = 0x120010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120010u, 0x26B3C0u, 0x26B3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B3C8u;
label_26b3c8:
    // 0x26b3c8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26b3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b3cc: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x26b3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x26b3d0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x26b3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26b3d4: 0xc048004  jal         func_120010
    ctx->pc = 0x26B3D4u;
    SET_GPR_U32(ctx, 31, 0x26B3DCu);
    ctx->pc = 0x120010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120010u, 0x26B3D4u, 0x26B3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B3DCu;
label_26b3dc:
    // 0x26b3dc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x26b3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b3e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26b3e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b3e4: 0xc091188  jal         func_244620
    ctx->pc = 0x26B3E4u;
    SET_GPR_U32(ctx, 31, 0x26B3ECu);
    ctx->pc = 0x244620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244620u, 0x26B3E4u, 0x26B3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B3ECu;
label_26b3ec:
    // 0x26b3ec: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x26b3ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26b3f0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x26b3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x26b3f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x26b3f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x26b3f8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26B3F8u;
    {
        const bool branch_taken_0x26b3f8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x26b3f8) {
            ctx->pc = 0x26B40Cu;
            goto label_26b40c;
        }
    }
    ctx->pc = 0x26B400u;
    // 0x26b400: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x26b400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b404: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x26B404u;
    SET_GPR_U32(ctx, 31, 0x26B40Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x26B404u, 0x26B40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B40Cu;
label_26b40c:
    // 0x26b40c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26b40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b410: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26b410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b414: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x26b414u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26b418: 0x3e00008  jr          $ra
    ctx->pc = 0x26B418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26B420u;
    // 0x26b420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26b420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26b424: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26b424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26b428: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x26b428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x26b42c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x26b42cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b430: 0xc0911a4  jal         func_244690
    ctx->pc = 0x26B430u;
    SET_GPR_U32(ctx, 31, 0x26B438u);
    ctx->pc = 0x244690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244690u, 0x26B430u, 0x26B438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B438u;
label_26b438:
    // 0x26b438: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26b438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b43c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x26b43cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26b440: 0x3e00008  jr          $ra
    ctx->pc = 0x26B440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26B448u;
    // 0x26b448: 0x0  nop
    ctx->pc = 0x26b448u;
    // NOP
    // 0x26b44c: 0x0  nop
    ctx->pc = 0x26b44cu;
    // NOP
    // 0x26b450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26b450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26b454: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26b454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26b458: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x26b458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x26b45c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x26b45cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b460: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26b460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b464: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26b464u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b468: 0xc09b7d8  jal         func_26DF60
    ctx->pc = 0x26B468u;
    SET_GPR_U32(ctx, 31, 0x26B470u);
    ctx->pc = 0x26DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26DF60u, 0x26B468u, 0x26B470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B470u;
label_26b470:
    // 0x26b470: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x26b470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b474: 0xc0911bc  jal         func_2446F0
    ctx->pc = 0x26B474u;
    SET_GPR_U32(ctx, 31, 0x26B47Cu);
    ctx->pc = 0x2446F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2446F0u, 0x26B474u, 0x26B47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B47Cu;
label_26b47c:
    // 0x26b47c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26b47cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b480: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x26b480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26b484: 0x3e00008  jr          $ra
    ctx->pc = 0x26B484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26B48Cu;
    // 0x26b48c: 0x0  nop
    ctx->pc = 0x26b48cu;
    // NOP
    // 0x26b490: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26b490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26b494: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26b494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26b498: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x26b498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x26b49c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x26b49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b4a0: 0xc0911cc  jal         func_244730
    ctx->pc = 0x26B4A0u;
    SET_GPR_U32(ctx, 31, 0x26B4A8u);
    ctx->pc = 0x244730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244730u, 0x26B4A0u, 0x26B4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B4A8u;
label_26b4a8:
    // 0x26b4a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26b4a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b4ac: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x26b4acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26b4b0: 0x3e00008  jr          $ra
    ctx->pc = 0x26B4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B4B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26B4B8u;
    // 0x26b4b8: 0x0  nop
    ctx->pc = 0x26b4b8u;
    // NOP
    // 0x26b4bc: 0x0  nop
    ctx->pc = 0x26b4bcu;
    // NOP
    ctx->pc = 0x26b4c0u;
}
