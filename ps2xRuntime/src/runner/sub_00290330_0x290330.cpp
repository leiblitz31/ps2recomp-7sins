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

// Function: sub_00290330
// Address: 0x290330 - 0x2903c0
void sub_00290330_0x290330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290330_0x290330");
#endif

    switch (ctx->pc) {
        case 0x29036cu: goto label_29036c;
        case 0x2903acu: goto label_2903ac;
        default: break;
    }

    ctx->pc = 0x290330u;

    // 0x290330: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x290330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x290334: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x290334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x290338: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x290338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x29033c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x29033cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x290340: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x290340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x290344: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x290344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x290348: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x290348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29034c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x29034cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x290350: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x290350u;
    {
        const bool branch_taken_0x290350 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x290350) {
            ctx->pc = 0x290384u;
            goto label_290384;
        }
    }
    ctx->pc = 0x290358u;
    // 0x290358: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x290358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29035c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x29035cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x290360: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x290360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x290364: 0xc0a41b8  jal         func_2906E0
    ctx->pc = 0x290364u;
    SET_GPR_U32(ctx, 31, 0x29036Cu);
    ctx->pc = 0x2906E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2906E0u, 0x290364u, 0x29036Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29036Cu;
label_29036c:
    // 0x29036c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x29036cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x290370: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x290370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x290374: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x290374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x290378: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x290378u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x29037c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x29037Cu;
    {
        const bool branch_taken_0x29037c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29037c) {
            ctx->pc = 0x2903ACu;
            goto label_2903ac;
        }
    }
    ctx->pc = 0x290384u;
label_290384:
    // 0x290384: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x290384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x290388: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x290388u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x29038c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x29038cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x290390: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x290390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x290394: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x290394u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x290398: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x290398u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x29039c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x29039cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2903a0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2903a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2903a4: 0xc0a40f0  jal         func_2903C0
    ctx->pc = 0x2903A4u;
    SET_GPR_U32(ctx, 31, 0x2903ACu);
    ctx->pc = 0x2903C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2903C0u, 0x2903A4u, 0x2903ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2903ACu;
label_2903ac:
    // 0x2903ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2903acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2903b0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2903b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2903b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2903B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2903B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2903BCu;
    // 0x2903bc: 0x0  nop
    ctx->pc = 0x2903bcu;
    // NOP
    ctx->pc = 0x2903c0u;
}
