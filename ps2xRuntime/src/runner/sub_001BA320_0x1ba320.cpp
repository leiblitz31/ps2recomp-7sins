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

// Function: sub_001BA320
// Address: 0x1ba320 - 0x1baa00
void sub_001BA320_0x1ba320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA320_0x1ba320");
#endif

    switch (ctx->pc) {
        case 0x1ba37cu: goto label_1ba37c;
        case 0x1ba390u: goto label_1ba390;
        case 0x1ba3c0u: goto label_1ba3c0;
        case 0x1ba3d4u: goto label_1ba3d4;
        case 0x1ba3e0u: goto label_1ba3e0;
        case 0x1ba3ecu: goto label_1ba3ec;
        case 0x1ba464u: goto label_1ba464;
        case 0x1ba4d4u: goto label_1ba4d4;
        case 0x1ba554u: goto label_1ba554;
        case 0x1ba5bcu: goto label_1ba5bc;
        case 0x1ba5fcu: goto label_1ba5fc;
        case 0x1ba6b4u: goto label_1ba6b4;
        case 0x1ba750u: goto label_1ba750;
        case 0x1ba76cu: goto label_1ba76c;
        case 0x1ba798u: goto label_1ba798;
        case 0x1ba830u: goto label_1ba830;
        case 0x1ba84cu: goto label_1ba84c;
        case 0x1ba864u: goto label_1ba864;
        case 0x1ba894u: goto label_1ba894;
        case 0x1ba8d8u: goto label_1ba8d8;
        case 0x1ba8e4u: goto label_1ba8e4;
        case 0x1ba8fcu: goto label_1ba8fc;
        case 0x1ba910u: goto label_1ba910;
        case 0x1ba924u: goto label_1ba924;
        case 0x1ba93cu: goto label_1ba93c;
        case 0x1ba948u: goto label_1ba948;
        case 0x1ba954u: goto label_1ba954;
        case 0x1ba96cu: goto label_1ba96c;
        case 0x1ba97cu: goto label_1ba97c;
        case 0x1ba990u: goto label_1ba990;
        case 0x1ba9a8u: goto label_1ba9a8;
        case 0x1ba9b4u: goto label_1ba9b4;
        case 0x1ba9d4u: goto label_1ba9d4;
        default: break;
    }

    ctx->pc = 0x1ba320u;

label_1ba320:
    // 0x1ba320: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ba320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ba324: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1ba324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1ba328: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1ba328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba32c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1ba32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ba330: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1ba330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba334: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ba334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ba338: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1ba338u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ba33c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1ba33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1ba340: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1ba340u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ba344: 0x1012  mflo        $v0
    ctx->pc = 0x1ba344u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1ba348: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1ba348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ba34c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA34Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA354u;
    // 0x1ba354: 0x0  nop
    ctx->pc = 0x1ba354u;
    // NOP
    // 0x1ba358: 0x0  nop
    ctx->pc = 0x1ba358u;
    // NOP
    // 0x1ba35c: 0x0  nop
    ctx->pc = 0x1ba35cu;
    // NOP
    // 0x1ba360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ba360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ba364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ba364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ba368: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1ba368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1ba36c: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x1ba36cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x1ba370: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x1ba370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x1ba374: 0xc0ac004  jal         func_2B0010
    ctx->pc = 0x1BA374u;
    SET_GPR_U32(ctx, 31, 0x1BA37Cu);
    ctx->pc = 0x2B0010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0010u, 0x1BA374u, 0x1BA37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA37Cu;
label_1ba37c:
    // 0x1ba37c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1ba37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba380: 0xac620060  sw          $v0, 0x60($v1)
    ctx->pc = 0x1ba380u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
    // 0x1ba384: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1ba384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba388: 0xc064a74  jal         func_1929D0
    ctx->pc = 0x1BA388u;
    SET_GPR_U32(ctx, 31, 0x1BA390u);
    ctx->pc = 0x1929D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1929D0u, 0x1BA388u, 0x1BA390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA390u;
label_1ba390:
    // 0x1ba390: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ba390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba394: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1ba394u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ba398: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA3A0u;
    // 0x1ba3a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ba3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ba3a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ba3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ba3a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1ba3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1ba3ac: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1ba3acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1ba3b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ba3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba3b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ba3b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba3b8: 0xc08f740  jal         func_23DD00
    ctx->pc = 0x1BA3B8u;
    SET_GPR_U32(ctx, 31, 0x1BA3C0u);
    ctx->pc = 0x23DD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DD00u, 0x1BA3B8u, 0x1BA3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA3C0u;
label_1ba3c0:
    // 0x1ba3c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ba3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba3c4: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x1ba3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1ba3c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ba3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba3cc: 0xc0ac13c  jal         func_2B04F0
    ctx->pc = 0x1BA3CCu;
    SET_GPR_U32(ctx, 31, 0x1BA3D4u);
    ctx->pc = 0x2B04F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B04F0u, 0x1BA3CCu, 0x1BA3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA3D4u;
label_1ba3d4:
    // 0x1ba3d4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1ba3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba3d8: 0xc06edd0  jal         func_1BB740
    ctx->pc = 0x1BA3D8u;
    SET_GPR_U32(ctx, 31, 0x1BA3E0u);
    ctx->pc = 0x1BB740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB740u, 0x1BA3D8u, 0x1BA3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA3E0u;
label_1ba3e0:
    // 0x1ba3e0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1ba3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba3e4: 0xc064adc  jal         func_192B70
    ctx->pc = 0x1BA3E4u;
    SET_GPR_U32(ctx, 31, 0x1BA3ECu);
    ctx->pc = 0x192B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B70u, 0x1BA3E4u, 0x1BA3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA3ECu;
label_1ba3ec:
    // 0x1ba3ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ba3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba3f0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1ba3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ba3f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA3F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA3F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA3FCu;
    // 0x1ba3fc: 0x0  nop
    ctx->pc = 0x1ba3fcu;
    // NOP
    // 0x1ba400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ba400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ba404: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1ba404u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ba408: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA410u;
    // 0x1ba410: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ba410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ba414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ba414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ba418: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1ba418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1ba41c: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x1ba41cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x1ba420: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1ba420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba424: 0x906300b0  lbu         $v1, 0xB0($v1)
    ctx->pc = 0x1ba424u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x1ba428: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BA428u;
    {
        const bool branch_taken_0x1ba428 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba428) {
            ctx->pc = 0x1BA470u;
            goto label_1ba470;
        }
    }
    ctx->pc = 0x1BA430u;
    // 0x1ba430: 0x93a30020  lbu         $v1, 0x20($sp)
    ctx->pc = 0x1ba430u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba434: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ba434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ba438: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BA438u;
    {
        const bool branch_taken_0x1ba438 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba438) {
            ctx->pc = 0x1BA450u;
            goto label_1ba450;
        }
    }
    ctx->pc = 0x1BA440u;
    // 0x1ba440: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1ba440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba444: 0xa06008e6  sb          $zero, 0x8E6($v1)
    ctx->pc = 0x1ba444u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2278), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ba448: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1BA448u;
    {
        const bool branch_taken_0x1ba448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba448) {
            ctx->pc = 0x1BA470u;
            goto label_1ba470;
        }
    }
    ctx->pc = 0x1BA450u;
label_1ba450:
    // 0x1ba450: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1ba450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba454: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ba454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba458: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1ba458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ba45c: 0xc0702fc  jal         func_1C0BF0
    ctx->pc = 0x1BA45Cu;
    SET_GPR_U32(ctx, 31, 0x1BA464u);
    ctx->pc = 0x1C0BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0BF0u, 0x1BA45Cu, 0x1BA464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA464u;
label_1ba464:
    // 0x1ba464: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ba464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba468: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1ba468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba46c: 0xa06408e6  sb          $a0, 0x8E6($v1)
    ctx->pc = 0x1ba46cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2278), (uint8_t)GPR_U32(ctx, 4));
label_1ba470:
    // 0x1ba470: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ba470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba474: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1ba474u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ba478: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA480u;
    // 0x1ba480: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ba480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ba484: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ba484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ba488: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1ba488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1ba48c: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x1ba48cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x1ba490: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1ba490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba494: 0x906300b0  lbu         $v1, 0xB0($v1)
    ctx->pc = 0x1ba494u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x1ba498: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1BA498u;
    {
        const bool branch_taken_0x1ba498 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba498) {
            ctx->pc = 0x1BA4F0u;
            goto label_1ba4f0;
        }
    }
    ctx->pc = 0x1BA4A0u;
    // 0x1ba4a0: 0x93a30020  lbu         $v1, 0x20($sp)
    ctx->pc = 0x1ba4a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba4a4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ba4a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ba4a8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BA4A8u;
    {
        const bool branch_taken_0x1ba4a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba4a8) {
            ctx->pc = 0x1BA4C0u;
            goto label_1ba4c0;
        }
    }
    ctx->pc = 0x1BA4B0u;
    // 0x1ba4b0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1ba4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba4b4: 0xa06008e4  sb          $zero, 0x8E4($v1)
    ctx->pc = 0x1ba4b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2276), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ba4b8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1BA4B8u;
    {
        const bool branch_taken_0x1ba4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba4b8) {
            ctx->pc = 0x1BA4F0u;
            goto label_1ba4f0;
        }
    }
    ctx->pc = 0x1BA4C0u;
label_1ba4c0:
    // 0x1ba4c0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1ba4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba4c4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ba4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ba4c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ba4c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba4cc: 0xc0702fc  jal         func_1C0BF0
    ctx->pc = 0x1BA4CCu;
    SET_GPR_U32(ctx, 31, 0x1BA4D4u);
    ctx->pc = 0x1C0BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0BF0u, 0x1BA4CCu, 0x1BA4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA4D4u;
label_1ba4d4:
    // 0x1ba4d4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1ba4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba4d8: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x1ba4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba4dc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1ba4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba4e0: 0xe46008d8  swc1        $f0, 0x8D8($v1)
    ctx->pc = 0x1ba4e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2264), bits); }
    // 0x1ba4e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ba4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba4e8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1ba4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba4ec: 0xa06408e4  sb          $a0, 0x8E4($v1)
    ctx->pc = 0x1ba4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2276), (uint8_t)GPR_U32(ctx, 4));
label_1ba4f0:
    // 0x1ba4f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ba4f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba4f4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1ba4f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ba4f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA4F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA4F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA500u;
    // 0x1ba500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ba500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ba504: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ba504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ba508: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1ba508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1ba50c: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x1ba50cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x1ba510: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1ba510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba514: 0x906300b0  lbu         $v1, 0xB0($v1)
    ctx->pc = 0x1ba514u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x1ba518: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1BA518u;
    {
        const bool branch_taken_0x1ba518 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba518) {
            ctx->pc = 0x1BA570u;
            goto label_1ba570;
        }
    }
    ctx->pc = 0x1BA520u;
    // 0x1ba520: 0x93a30020  lbu         $v1, 0x20($sp)
    ctx->pc = 0x1ba520u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba524: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ba524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ba528: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BA528u;
    {
        const bool branch_taken_0x1ba528 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba528) {
            ctx->pc = 0x1BA540u;
            goto label_1ba540;
        }
    }
    ctx->pc = 0x1BA530u;
    // 0x1ba530: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1ba530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba534: 0xa06008e5  sb          $zero, 0x8E5($v1)
    ctx->pc = 0x1ba534u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2277), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ba538: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1BA538u;
    {
        const bool branch_taken_0x1ba538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba538) {
            ctx->pc = 0x1BA570u;
            goto label_1ba570;
        }
    }
    ctx->pc = 0x1BA540u;
label_1ba540:
    // 0x1ba540: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1ba540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba544: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ba544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba548: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ba548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba54c: 0xc0702fc  jal         func_1C0BF0
    ctx->pc = 0x1BA54Cu;
    SET_GPR_U32(ctx, 31, 0x1BA554u);
    ctx->pc = 0x1C0BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0BF0u, 0x1BA54Cu, 0x1BA554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA554u;
label_1ba554:
    // 0x1ba554: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1ba554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba558: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x1ba558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba55c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1ba55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba560: 0xe46008d8  swc1        $f0, 0x8D8($v1)
    ctx->pc = 0x1ba560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2264), bits); }
    // 0x1ba564: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ba564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba568: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1ba568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba56c: 0xa06408e5  sb          $a0, 0x8E5($v1)
    ctx->pc = 0x1ba56cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2277), (uint8_t)GPR_U32(ctx, 4));
label_1ba570:
    // 0x1ba570: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ba570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba574: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1ba574u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ba578: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA580u;
    // 0x1ba580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ba580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ba584: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1ba584u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ba588: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA590u;
    // 0x1ba590: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ba590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ba594: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ba594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ba598: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1ba598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1ba59c: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x1ba59cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x1ba5a0: 0x93a30020  lbu         $v1, 0x20($sp)
    ctx->pc = 0x1ba5a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba5a4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BA5A4u;
    {
        const bool branch_taken_0x1ba5a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba5a4) {
            ctx->pc = 0x1BA5BCu;
            goto label_1ba5bc;
        }
    }
    ctx->pc = 0x1BA5ACu;
    // 0x1ba5ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1ba5acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba5b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ba5b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba5b4: 0xc06efd0  jal         func_1BBF40
    ctx->pc = 0x1BA5B4u;
    SET_GPR_U32(ctx, 31, 0x1BA5BCu);
    ctx->pc = 0x1BBF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBF40u, 0x1BA5B4u, 0x1BA5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA5BCu;
label_1ba5bc:
    // 0x1ba5bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ba5bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba5c0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1ba5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ba5c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA5C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA5C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA5CCu;
    // 0x1ba5cc: 0x0  nop
    ctx->pc = 0x1ba5ccu;
    // NOP
    // 0x1ba5d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ba5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ba5d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ba5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ba5d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1ba5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1ba5dc: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x1ba5dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x1ba5e0: 0x93a30020  lbu         $v1, 0x20($sp)
    ctx->pc = 0x1ba5e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba5e4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BA5E4u;
    {
        const bool branch_taken_0x1ba5e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba5e4) {
            ctx->pc = 0x1BA5FCu;
            goto label_1ba5fc;
        }
    }
    ctx->pc = 0x1BA5ECu;
    // 0x1ba5ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1ba5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba5f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ba5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba5f4: 0xc06efd0  jal         func_1BBF40
    ctx->pc = 0x1BA5F4u;
    SET_GPR_U32(ctx, 31, 0x1BA5FCu);
    ctx->pc = 0x1BBF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBF40u, 0x1BA5F4u, 0x1BA5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA5FCu;
label_1ba5fc:
    // 0x1ba5fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ba5fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba600: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1ba600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ba604: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA60Cu;
    // 0x1ba60c: 0x0  nop
    ctx->pc = 0x1ba60cu;
    // NOP
    // 0x1ba610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ba610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ba614: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1ba614u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ba618: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA620u;
    // 0x1ba620: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ba620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ba624: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1ba624u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ba628: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA630u;
    // 0x1ba630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ba630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ba634: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ba634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ba638: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1ba638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1ba63c: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x1ba63cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1ba640: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1ba640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba644: 0x906300b0  lbu         $v1, 0xB0($v1)
    ctx->pc = 0x1ba644u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x1ba648: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1BA648u;
    {
        const bool branch_taken_0x1ba648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba648) {
            ctx->pc = 0x1BA6B4u;
            goto label_1ba6b4;
        }
    }
    ctx->pc = 0x1BA650u;
    // 0x1ba650: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1ba650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba654: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x1ba654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba658: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1ba658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba65c: 0xc46008dc  lwc1        $f0, 0x8DC($v1)
    ctx->pc = 0x1ba65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba660: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1ba660u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ba664: 0xc78082dc  lwc1        $f0, -0x7D24($gp)
    ctx->pc = 0x1ba664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba668: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ba668u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ba66c: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x1BA66Cu;
    {
        const bool branch_taken_0x1ba66c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba66c) {
            ctx->pc = 0x1BA6B4u;
            goto label_1ba6b4;
        }
    }
    ctx->pc = 0x1BA674u;
    // 0x1ba674: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1ba674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba678: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x1ba678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba67c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1ba67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba680: 0xe46008dc  swc1        $f0, 0x8DC($v1)
    ctx->pc = 0x1ba680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2268), bits); }
    // 0x1ba684: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1ba684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba688: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1ba688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1ba68c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ba68cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba690: 0x0  nop
    ctx->pc = 0x1ba690u;
    // NOP
    // 0x1ba694: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ba694u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ba698: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1BA698u;
    {
        const bool branch_taken_0x1ba698 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba698) {
            ctx->pc = 0x1BA6B4u;
            goto label_1ba6b4;
        }
    }
    ctx->pc = 0x1BA6A0u;
    // 0x1ba6a0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1ba6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba6a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ba6a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba6a8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1ba6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ba6ac: 0xc0702fc  jal         func_1C0BF0
    ctx->pc = 0x1BA6ACu;
    SET_GPR_U32(ctx, 31, 0x1BA6B4u);
    ctx->pc = 0x1C0BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0BF0u, 0x1BA6ACu, 0x1BA6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA6B4u;
label_1ba6b4:
    // 0x1ba6b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ba6b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba6b8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1ba6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ba6bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA6BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA6C4u;
    // 0x1ba6c4: 0x0  nop
    ctx->pc = 0x1ba6c4u;
    // NOP
    // 0x1ba6c8: 0x0  nop
    ctx->pc = 0x1ba6c8u;
    // NOP
    // 0x1ba6cc: 0x0  nop
    ctx->pc = 0x1ba6ccu;
    // NOP
    // 0x1ba6d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ba6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ba6d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ba6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ba6d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ba6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ba6dc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1ba6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1ba6e0: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x1ba6e0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1ba6e4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1ba6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba6e8: 0x906300b0  lbu         $v1, 0xB0($v1)
    ctx->pc = 0x1ba6e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x1ba6ec: 0x1460002a  bnez        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x1BA6ECu;
    {
        const bool branch_taken_0x1ba6ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba6ec) {
            ctx->pc = 0x1BA798u;
            goto label_1ba798;
        }
    }
    ctx->pc = 0x1BA6F4u;
    // 0x1ba6f4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1ba6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba6f8: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x1ba6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba6fc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1ba6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba700: 0xc46008dc  lwc1        $f0, 0x8DC($v1)
    ctx->pc = 0x1ba700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba704: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1ba704u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ba708: 0xc78082dc  lwc1        $f0, -0x7D24($gp)
    ctx->pc = 0x1ba708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba70c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ba70cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ba710: 0x45010021  bc1t        . + 4 + (0x21 << 2)
    ctx->pc = 0x1BA710u;
    {
        const bool branch_taken_0x1ba710 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba710) {
            ctx->pc = 0x1BA798u;
            goto label_1ba798;
        }
    }
    ctx->pc = 0x1BA718u;
    // 0x1ba718: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1ba718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba71c: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x1ba71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba720: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1ba720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba724: 0xe46008dc  swc1        $f0, 0x8DC($v1)
    ctx->pc = 0x1ba724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2268), bits); }
    // 0x1ba728: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x1ba728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba72c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1ba72cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1ba730: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ba730u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba734: 0x0  nop
    ctx->pc = 0x1ba734u;
    // NOP
    // 0x1ba738: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ba738u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ba73c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1BA73Cu;
    {
        const bool branch_taken_0x1ba73c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba73c) {
            ctx->pc = 0x1BA758u;
            goto label_1ba758;
        }
    }
    ctx->pc = 0x1BA744u;
    // 0x1ba744: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1ba744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba748: 0xc0704c0  jal         func_1C1300
    ctx->pc = 0x1BA748u;
    SET_GPR_U32(ctx, 31, 0x1BA750u);
    ctx->pc = 0x1C1300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1300u, 0x1BA748u, 0x1BA750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA750u;
label_1ba750:
    // 0x1ba750: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BA750u;
    {
        const bool branch_taken_0x1ba750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba750) {
            ctx->pc = 0x1BA760u;
            goto label_1ba760;
        }
    }
    ctx->pc = 0x1BA758u;
label_1ba758:
    // 0x1ba758: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1BA758u;
    {
        const bool branch_taken_0x1ba758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba758) {
            ctx->pc = 0x1BA798u;
            goto label_1ba798;
        }
    }
    ctx->pc = 0x1BA760u;
label_1ba760:
    // 0x1ba760: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1ba760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba764: 0xc0702a8  jal         func_1C0AA0
    ctx->pc = 0x1BA764u;
    SET_GPR_U32(ctx, 31, 0x1BA76Cu);
    ctx->pc = 0x1C0AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0AA0u, 0x1BA764u, 0x1BA76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA76Cu;
label_1ba76c:
    // 0x1ba76c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ba76cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba770: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BA770u;
    {
        const bool branch_taken_0x1ba770 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba770) {
            ctx->pc = 0x1BA798u;
            goto label_1ba798;
        }
    }
    ctx->pc = 0x1BA778u;
    // 0x1ba778: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1ba778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ba77c: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BA77Cu;
    {
        const bool branch_taken_0x1ba77c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1ba77c) {
            ctx->pc = 0x1BA798u;
            goto label_1ba798;
        }
    }
    ctx->pc = 0x1BA784u;
    // 0x1ba784: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1ba784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba788: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ba788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ba78c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ba78cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba790: 0xc0702fc  jal         func_1C0BF0
    ctx->pc = 0x1BA790u;
    SET_GPR_U32(ctx, 31, 0x1BA798u);
    ctx->pc = 0x1C0BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0BF0u, 0x1BA790u, 0x1BA798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA798u;
label_1ba798:
    // 0x1ba798: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ba798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba79c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ba79cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba7a0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1ba7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ba7a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA7A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA7A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA7ACu;
    // 0x1ba7ac: 0x0  nop
    ctx->pc = 0x1ba7acu;
    // NOP
    // 0x1ba7b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ba7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ba7b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ba7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ba7b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ba7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ba7bc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1ba7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1ba7c0: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x1ba7c0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1ba7c4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1ba7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba7c8: 0x906300b0  lbu         $v1, 0xB0($v1)
    ctx->pc = 0x1ba7c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x1ba7cc: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x1BA7CCu;
    {
        const bool branch_taken_0x1ba7cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba7cc) {
            ctx->pc = 0x1BA894u;
            goto label_1ba894;
        }
    }
    ctx->pc = 0x1BA7D4u;
    // 0x1ba7d4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1ba7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba7d8: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x1ba7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba7dc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1ba7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba7e0: 0xc46008dc  lwc1        $f0, 0x8DC($v1)
    ctx->pc = 0x1ba7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba7e4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1ba7e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ba7e8: 0xc78082dc  lwc1        $f0, -0x7D24($gp)
    ctx->pc = 0x1ba7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba7ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ba7ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ba7f0: 0x45010028  bc1t        . + 4 + (0x28 << 2)
    ctx->pc = 0x1BA7F0u;
    {
        const bool branch_taken_0x1ba7f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba7f0) {
            ctx->pc = 0x1BA894u;
            goto label_1ba894;
        }
    }
    ctx->pc = 0x1BA7F8u;
    // 0x1ba7f8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1ba7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba7fc: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x1ba7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba800: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1ba800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba804: 0xe46008dc  swc1        $f0, 0x8DC($v1)
    ctx->pc = 0x1ba804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2268), bits); }
    // 0x1ba808: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x1ba808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba80c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1ba80cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1ba810: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ba810u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba814: 0x0  nop
    ctx->pc = 0x1ba814u;
    // NOP
    // 0x1ba818: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ba818u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ba81c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1BA81Cu;
    {
        const bool branch_taken_0x1ba81c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba81c) {
            ctx->pc = 0x1BA838u;
            goto label_1ba838;
        }
    }
    ctx->pc = 0x1BA824u;
    // 0x1ba824: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1ba824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba828: 0xc0704c0  jal         func_1C1300
    ctx->pc = 0x1BA828u;
    SET_GPR_U32(ctx, 31, 0x1BA830u);
    ctx->pc = 0x1C1300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1300u, 0x1BA828u, 0x1BA830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA830u;
label_1ba830:
    // 0x1ba830: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BA830u;
    {
        const bool branch_taken_0x1ba830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba830) {
            ctx->pc = 0x1BA840u;
            goto label_1ba840;
        }
    }
    ctx->pc = 0x1BA838u;
label_1ba838:
    // 0x1ba838: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1BA838u;
    {
        const bool branch_taken_0x1ba838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba838) {
            ctx->pc = 0x1BA894u;
            goto label_1ba894;
        }
    }
    ctx->pc = 0x1BA840u;
label_1ba840:
    // 0x1ba840: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1ba840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba844: 0xc0702a8  jal         func_1C0AA0
    ctx->pc = 0x1BA844u;
    SET_GPR_U32(ctx, 31, 0x1BA84Cu);
    ctx->pc = 0x1C0AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0AA0u, 0x1BA844u, 0x1BA84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA84Cu;
label_1ba84c:
    // 0x1ba84c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ba84cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba850: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1BA850u;
    {
        const bool branch_taken_0x1ba850 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba850) {
            ctx->pc = 0x1BA894u;
            goto label_1ba894;
        }
    }
    ctx->pc = 0x1BA858u;
    // 0x1ba858: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1ba858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba85c: 0xc0702a8  jal         func_1C0AA0
    ctx->pc = 0x1BA85Cu;
    SET_GPR_U32(ctx, 31, 0x1BA864u);
    ctx->pc = 0x1C0AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0AA0u, 0x1BA85Cu, 0x1BA864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA864u;
label_1ba864:
    // 0x1ba864: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1ba864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ba868: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1ba868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1ba86c: 0x8c63be58  lw          $v1, -0x41A8($v1)
    ctx->pc = 0x1ba86cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x60BE58u));
    // 0x1ba870: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ba870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ba874: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x1ba874u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ba878: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BA878u;
    {
        const bool branch_taken_0x1ba878 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba878) {
            ctx->pc = 0x1BA894u;
            goto label_1ba894;
        }
    }
    ctx->pc = 0x1BA880u;
    // 0x1ba880: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1ba880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba884: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ba884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba888: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ba888u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba88c: 0xc0702fc  jal         func_1C0BF0
    ctx->pc = 0x1BA88Cu;
    SET_GPR_U32(ctx, 31, 0x1BA894u);
    ctx->pc = 0x1C0BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0BF0u, 0x1BA88Cu, 0x1BA894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA894u;
label_1ba894:
    // 0x1ba894: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ba894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba898: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ba898u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba89c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1ba89cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ba8a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA8A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA8A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA8A8u;
    // 0x1ba8a8: 0x0  nop
    ctx->pc = 0x1ba8a8u;
    // NOP
    // 0x1ba8ac: 0x0  nop
    ctx->pc = 0x1ba8acu;
    // NOP
    // 0x1ba8b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ba8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ba8b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ba8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ba8b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ba8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ba8bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ba8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ba8c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ba8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ba8c4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1ba8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1ba8c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ba8c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba8cc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ba8ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba8d0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1BA8D0u;
    {
        const bool branch_taken_0x1ba8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba8d0) {
            ctx->pc = 0x1BA914u;
            goto label_1ba914;
        }
    }
    ctx->pc = 0x1BA8D8u;
label_1ba8d8:
    // 0x1ba8d8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1ba8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ba8dc: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1BA8DCu;
    SET_GPR_U32(ctx, 31, 0x1BA8E4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1BA8DCu, 0x1BA8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA8E4u;
label_1ba8e4:
    // 0x1ba8e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ba8e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba8e8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ba8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ba8ec: 0x244400c4  addiu       $a0, $v0, 0xC4
    ctx->pc = 0x1ba8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
    // 0x1ba8f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ba8f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba8f4: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1BA8F4u;
    SET_GPR_U32(ctx, 31, 0x1BA8FCu);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1BA8F4u, 0x1BA8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA8FCu;
label_1ba8fc:
    // 0x1ba8fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ba8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba900: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ba900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ba904: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ba904u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba908: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1BA908u;
    SET_GPR_U32(ctx, 31, 0x1BA910u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1BA908u, 0x1BA910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA910u;
label_1ba910:
    // 0x1ba910: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ba910u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1ba914:
    // 0x1ba914: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ba914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ba918: 0x244400c4  addiu       $a0, $v0, 0xC4
    ctx->pc = 0x1ba918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
    // 0x1ba91c: 0xc044598  jal         func_111660
    ctx->pc = 0x1BA91Cu;
    SET_GPR_U32(ctx, 31, 0x1BA924u);
    ctx->pc = 0x111660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111660u, 0x1BA91Cu, 0x1BA924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA924u;
label_1ba924:
    // 0x1ba924: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1ba924u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ba928: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1BA928u;
    {
        const bool branch_taken_0x1ba928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba928) {
            ctx->pc = 0x1BA8D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ba8d8;
        }
    }
    ctx->pc = 0x1BA930u;
    // 0x1ba930: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ba930u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba934: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1BA934u;
    {
        const bool branch_taken_0x1ba934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba934) {
            ctx->pc = 0x1BA9C4u;
            goto label_1ba9c4;
        }
    }
    ctx->pc = 0x1BA93Cu;
label_1ba93c:
    // 0x1ba93c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ba93cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba940: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1BA940u;
    {
        const bool branch_taken_0x1ba940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba940) {
            ctx->pc = 0x1BA994u;
            goto label_1ba994;
        }
    }
    ctx->pc = 0x1BA948u;
label_1ba948:
    // 0x1ba948: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1ba948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ba94c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1BA94Cu;
    SET_GPR_U32(ctx, 31, 0x1BA954u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1BA94Cu, 0x1BA954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA954u;
label_1ba954:
    // 0x1ba954: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ba954u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba958: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ba958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ba95c: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x1ba95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x1ba960: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ba960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba964: 0xc06ea80  jal         func_1BAA00
    ctx->pc = 0x1BA964u;
    SET_GPR_U32(ctx, 31, 0x1BA96Cu);
    ctx->pc = 0x1BAA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAA00u, 0x1BA964u, 0x1BA96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA96Cu;
label_1ba96c:
    // 0x1ba96c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ba96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba970: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ba970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba974: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1BA974u;
    SET_GPR_U32(ctx, 31, 0x1BA97Cu);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1BA974u, 0x1BA97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA97Cu;
label_1ba97c:
    // 0x1ba97c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ba97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba980: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ba980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ba984: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ba984u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba988: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1BA988u;
    SET_GPR_U32(ctx, 31, 0x1BA990u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1BA988u, 0x1BA990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA990u;
label_1ba990:
    // 0x1ba990: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ba990u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1ba994:
    // 0x1ba994: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ba994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ba998: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x1ba998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x1ba99c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ba99cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba9a0: 0xc06ea80  jal         func_1BAA00
    ctx->pc = 0x1BA9A0u;
    SET_GPR_U32(ctx, 31, 0x1BA9A8u);
    ctx->pc = 0x1BAA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAA00u, 0x1BA9A0u, 0x1BA9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA9A8u;
label_1ba9a8:
    // 0x1ba9a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ba9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba9ac: 0xc044598  jal         func_111660
    ctx->pc = 0x1BA9ACu;
    SET_GPR_U32(ctx, 31, 0x1BA9B4u);
    ctx->pc = 0x111660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111660u, 0x1BA9ACu, 0x1BA9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA9B4u;
label_1ba9b4:
    // 0x1ba9b4: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1ba9b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ba9b8: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1BA9B8u;
    {
        const bool branch_taken_0x1ba9b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba9b8) {
            ctx->pc = 0x1BA948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ba948;
        }
    }
    ctx->pc = 0x1BA9C0u;
    // 0x1ba9c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ba9c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1ba9c4:
    // 0x1ba9c4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ba9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ba9c8: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x1ba9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x1ba9cc: 0xc06e8c8  jal         func_1BA320
    ctx->pc = 0x1BA9CCu;
    SET_GPR_U32(ctx, 31, 0x1BA9D4u);
    ctx->pc = 0x1BA320u;
    goto label_1ba320;
    ctx->pc = 0x1BA9D4u;
label_1ba9d4:
    // 0x1ba9d4: 0x222182b  sltu        $v1, $s1, $v0
    ctx->pc = 0x1ba9d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ba9d8: 0x1460ffd8  bnez        $v1, . + 4 + (-0x28 << 2)
    ctx->pc = 0x1BA9D8u;
    {
        const bool branch_taken_0x1ba9d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba9d8) {
            ctx->pc = 0x1BA93Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ba93c;
        }
    }
    ctx->pc = 0x1BA9E0u;
    // 0x1ba9e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ba9e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ba9e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ba9e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba9e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ba9e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba9ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ba9ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba9f0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1ba9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ba9f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA9F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA9F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA9FCu;
    // 0x1ba9fc: 0x0  nop
    ctx->pc = 0x1ba9fcu;
    // NOP
    ctx->pc = 0x1baa00u;
}
