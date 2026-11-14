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

// Function: sub_00228190
// Address: 0x228190 - 0x2283d0
void sub_00228190_0x228190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228190_0x228190");
#endif

    switch (ctx->pc) {
        case 0x2281d0u: goto label_2281d0;
        case 0x2281e4u: goto label_2281e4;
        case 0x2281f4u: goto label_2281f4;
        case 0x228204u: goto label_228204;
        case 0x22820cu: goto label_22820c;
        case 0x228218u: goto label_228218;
        case 0x228224u: goto label_228224;
        case 0x228230u: goto label_228230;
        case 0x228244u: goto label_228244;
        case 0x228254u: goto label_228254;
        case 0x22826cu: goto label_22826c;
        case 0x22828cu: goto label_22828c;
        case 0x2282acu: goto label_2282ac;
        case 0x2282ccu: goto label_2282cc;
        case 0x2282ecu: goto label_2282ec;
        case 0x22830cu: goto label_22830c;
        case 0x22831cu: goto label_22831c;
        case 0x228328u: goto label_228328;
        case 0x22833cu: goto label_22833c;
        case 0x228350u: goto label_228350;
        case 0x228364u: goto label_228364;
        case 0x22838cu: goto label_22838c;
        case 0x22839cu: goto label_22839c;
        case 0x2283b0u: goto label_2283b0;
        default: break;
    }

    ctx->pc = 0x228190u;

    // 0x228190: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x228190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x228194: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x228194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x228198: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x228198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22819c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x22819cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2281a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2281A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2281A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2281A8u;
    // 0x2281a8: 0x0  nop
    ctx->pc = 0x2281a8u;
    // NOP
    // 0x2281ac: 0x0  nop
    ctx->pc = 0x2281acu;
    // NOP
    // 0x2281b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2281b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2281b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2281b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2281b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2281b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2281bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2281bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2281c0: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x2281c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x2281c4: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x2281c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x2281c8: 0xc08a240  jal         func_228900
    ctx->pc = 0x2281C8u;
    SET_GPR_U32(ctx, 31, 0x2281D0u);
    ctx->pc = 0x228900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228900u, 0x2281C8u, 0x2281D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2281D0u;
label_2281d0:
    // 0x2281d0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2281d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2281d4: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x2281d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x2281d8: 0x2445004c  addiu       $a1, $v0, 0x4C
    ctx->pc = 0x2281d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x2281dc: 0xc08a220  jal         func_228880
    ctx->pc = 0x2281DCu;
    SET_GPR_U32(ctx, 31, 0x2281E4u);
    ctx->pc = 0x228880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228880u, 0x2281DCu, 0x2281E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2281E4u;
label_2281e4:
    // 0x2281e4: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x2281e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x2281e8: 0x27a50034  addiu       $a1, $sp, 0x34
    ctx->pc = 0x2281e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x2281ec: 0xc08a214  jal         func_228850
    ctx->pc = 0x2281ECu;
    SET_GPR_U32(ctx, 31, 0x2281F4u);
    ctx->pc = 0x228850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228850u, 0x2281ECu, 0x2281F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2281F4u;
label_2281f4:
    // 0x2281f4: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x2281f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x2281f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2281f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2281fc: 0xc08a204  jal         func_228810
    ctx->pc = 0x2281FCu;
    SET_GPR_U32(ctx, 31, 0x228204u);
    ctx->pc = 0x228810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228810u, 0x2281FCu, 0x228204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228204u;
label_228204:
    // 0x228204: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x228204u;
    {
        const bool branch_taken_0x228204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x228204) {
            ctx->pc = 0x228230u;
            goto label_228230;
        }
    }
    ctx->pc = 0x22820Cu;
label_22820c:
    // 0x22820c: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x22820cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x228210: 0xc08a1f0  jal         func_2287C0
    ctx->pc = 0x228210u;
    SET_GPR_U32(ctx, 31, 0x228218u);
    ctx->pc = 0x2287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C0u, 0x228210u, 0x228218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228218u;
label_228218:
    // 0x228218: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x228218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x22821c: 0xc0c6fce  jal         func_31BF38
    ctx->pc = 0x22821Cu;
    SET_GPR_U32(ctx, 31, 0x228224u);
    ctx->pc = 0x31BF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31BF38u, 0x22821Cu, 0x228224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228224u;
label_228224:
    // 0x228224: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x228224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x228228: 0xc08a1e0  jal         func_228780
    ctx->pc = 0x228228u;
    SET_GPR_U32(ctx, 31, 0x228230u);
    ctx->pc = 0x228780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228780u, 0x228228u, 0x228230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228230u;
label_228230:
    // 0x228230: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x228230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x228234: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x228234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x228238: 0x2445004c  addiu       $a1, $v0, 0x4C
    ctx->pc = 0x228238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x22823c: 0xc08a1b4  jal         func_2286D0
    ctx->pc = 0x22823Cu;
    SET_GPR_U32(ctx, 31, 0x228244u);
    ctx->pc = 0x2286D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2286D0u, 0x22823Cu, 0x228244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228244u;
label_228244:
    // 0x228244: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x228244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x228248: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x228248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22824c: 0xc041998  jal         func_106660
    ctx->pc = 0x22824Cu;
    SET_GPR_U32(ctx, 31, 0x228254u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x22824Cu, 0x228254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228254u;
label_228254:
    // 0x228254: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x228254u;
    {
        const bool branch_taken_0x228254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x228254) {
            ctx->pc = 0x22820Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22820c;
        }
    }
    ctx->pc = 0x22825Cu;
    // 0x22825c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x22825cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x228260: 0x2444004c  addiu       $a0, $v0, 0x4C
    ctx->pc = 0x228260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x228264: 0xc08a1a8  jal         func_2286A0
    ctx->pc = 0x228264u;
    SET_GPR_U32(ctx, 31, 0x22826Cu);
    ctx->pc = 0x2286A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2286A0u, 0x228264u, 0x22826Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22826Cu;
label_22826c:
    // 0x22826c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x22826cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x228270: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x228270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x228274: 0x10020005  beq         $zero, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x228274u;
    {
        const bool branch_taken_0x228274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x228274) {
            ctx->pc = 0x22828Cu;
            goto label_22828c;
        }
    }
    ctx->pc = 0x22827Cu;
    // 0x22827c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x22827cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x228280: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x228280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x228284: 0xc10822c  jal         func_4208B0
    ctx->pc = 0x228284u;
    SET_GPR_U32(ctx, 31, 0x22828Cu);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x228284u, 0x22828Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22828Cu;
label_22828c:
    // 0x22828c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x22828cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x228290: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x228290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x228294: 0x10020005  beq         $zero, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x228294u;
    {
        const bool branch_taken_0x228294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x228294) {
            ctx->pc = 0x2282ACu;
            goto label_2282ac;
        }
    }
    ctx->pc = 0x22829Cu;
    // 0x22829c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x22829cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2282a0: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x2282a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2282a4: 0xc10822c  jal         func_4208B0
    ctx->pc = 0x2282A4u;
    SET_GPR_U32(ctx, 31, 0x2282ACu);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x2282A4u, 0x2282ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2282ACu;
label_2282ac:
    // 0x2282ac: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2282acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2282b0: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x2282b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2282b4: 0x10020005  beq         $zero, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2282B4u;
    {
        const bool branch_taken_0x2282b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2282b4) {
            ctx->pc = 0x2282CCu;
            goto label_2282cc;
        }
    }
    ctx->pc = 0x2282BCu;
    // 0x2282bc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2282bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2282c0: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x2282c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2282c4: 0xc10822c  jal         func_4208B0
    ctx->pc = 0x2282C4u;
    SET_GPR_U32(ctx, 31, 0x2282CCu);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x2282C4u, 0x2282CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2282CCu;
label_2282cc:
    // 0x2282cc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2282ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2282d0: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x2282d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2282d4: 0x10020005  beq         $zero, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2282D4u;
    {
        const bool branch_taken_0x2282d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2282d4) {
            ctx->pc = 0x2282ECu;
            goto label_2282ec;
        }
    }
    ctx->pc = 0x2282DCu;
    // 0x2282dc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2282dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2282e0: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x2282e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2282e4: 0xc10822c  jal         func_4208B0
    ctx->pc = 0x2282E4u;
    SET_GPR_U32(ctx, 31, 0x2282ECu);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x2282E4u, 0x2282ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2282ECu;
label_2282ec:
    // 0x2282ec: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2282ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2282f0: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x2282f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x2282f4: 0x10020005  beq         $zero, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2282F4u;
    {
        const bool branch_taken_0x2282f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2282f4) {
            ctx->pc = 0x22830Cu;
            goto label_22830c;
        }
    }
    ctx->pc = 0x2282FCu;
    // 0x2282fc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2282fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x228300: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x228300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x228304: 0xc10822c  jal         func_4208B0
    ctx->pc = 0x228304u;
    SET_GPR_U32(ctx, 31, 0x22830Cu);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x228304u, 0x22830Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22830Cu;
label_22830c:
    // 0x22830c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x22830cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x228310: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x228310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x228314: 0xc08a1a0  jal         func_228680
    ctx->pc = 0x228314u;
    SET_GPR_U32(ctx, 31, 0x22831Cu);
    ctx->pc = 0x228680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228680u, 0x228314u, 0x22831Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22831Cu;
label_22831c:
    // 0x22831c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22831cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228320: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x228320u;
    {
        const bool branch_taken_0x228320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x228320) {
            ctx->pc = 0x228354u;
            goto label_228354;
        }
    }
    ctx->pc = 0x228328u;
label_228328:
    // 0x228328: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x228328u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22832c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x22832cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228330: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x228330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x228334: 0xc0e20da  jal         func_388368
    ctx->pc = 0x228334u;
    SET_GPR_U32(ctx, 31, 0x22833Cu);
    ctx->pc = 0x388368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388368u, 0x228334u, 0x22833Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22833Cu;
label_22833c:
    // 0x22833c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x22833cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x228340: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x228340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x228344: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x228344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228348: 0xc08a120  jal         func_228480
    ctx->pc = 0x228348u;
    SET_GPR_U32(ctx, 31, 0x228350u);
    ctx->pc = 0x228480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228480u, 0x228348u, 0x228350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228350u;
label_228350:
    // 0x228350: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x228350u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_228354:
    // 0x228354: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x228354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x228358: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x228358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x22835c: 0xc08a118  jal         func_228460
    ctx->pc = 0x22835Cu;
    SET_GPR_U32(ctx, 31, 0x228364u);
    ctx->pc = 0x228460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228460u, 0x22835Cu, 0x228364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228364u;
label_228364:
    // 0x228364: 0x1602fff0  bne         $s0, $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x228364u;
    {
        const bool branch_taken_0x228364 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x228364) {
            ctx->pc = 0x228328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_228328;
        }
    }
    ctx->pc = 0x22836Cu;
    // 0x22836c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x22836cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x228370: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x228370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x228374: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x228374u;
    {
        const bool branch_taken_0x228374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x228374) {
            ctx->pc = 0x2283A4u;
            goto label_2283a4;
        }
    }
    ctx->pc = 0x22837Cu;
    // 0x22837c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x22837cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x228380: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x228380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x228384: 0xc08a0f4  jal         func_2283D0
    ctx->pc = 0x228384u;
    SET_GPR_U32(ctx, 31, 0x22838Cu);
    ctx->pc = 0x2283D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2283D0u, 0x228384u, 0x22838Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22838Cu;
label_22838c:
    // 0x22838c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x22838cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x228390: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x228390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x228394: 0xc119c5c  jal         func_467170
    ctx->pc = 0x228394u;
    SET_GPR_U32(ctx, 31, 0x22839Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x228394u, 0x22839Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22839Cu;
label_22839c:
    // 0x22839c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x22839cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2283a0: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x2283a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_2283a4:
    // 0x2283a4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2283a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2283a8: 0xc08ec48  jal         func_23B120
    ctx->pc = 0x2283A8u;
    SET_GPR_U32(ctx, 31, 0x2283B0u);
    ctx->pc = 0x23B120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B120u, 0x2283A8u, 0x2283B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2283B0u;
label_2283b0:
    // 0x2283b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2283b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2283b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2283b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2283b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2283b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2283bc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2283bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2283c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2283C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2283C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2283C8u;
    // 0x2283c8: 0x0  nop
    ctx->pc = 0x2283c8u;
    // NOP
    // 0x2283cc: 0x0  nop
    ctx->pc = 0x2283ccu;
    // NOP
    ctx->pc = 0x2283d0u;
}
