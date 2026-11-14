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

// Function: sub_00464050
// Address: 0x464050 - 0x464100
void sub_00464050_0x464050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00464050_0x464050");
#endif

    switch (ctx->pc) {
        case 0x464080u: goto label_464080;
        case 0x4640a0u: goto label_4640a0;
        case 0x4640b4u: goto label_4640b4;
        case 0x4640c4u: goto label_4640c4;
        case 0x4640d8u: goto label_4640d8;
        default: break;
    }

    ctx->pc = 0x464050u;

    // 0x464050: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x464050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x464054: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x464054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x464058: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x464058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x46405c: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x46405cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x464060: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x464060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x464064: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x464064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x464068: 0xafa70070  sw          $a3, 0x70($sp)
    ctx->pc = 0x464068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 7));
    // 0x46406c: 0xafa80080  sw          $t0, 0x80($sp)
    ctx->pc = 0x46406cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 8));
    // 0x464070: 0xafa90090  sw          $t1, 0x90($sp)
    ctx->pc = 0x464070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 9));
    // 0x464074: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x464074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x464078: 0xc0495e0  jal         func_125780
    ctx->pc = 0x464078u;
    SET_GPR_U32(ctx, 31, 0x464080u);
    ctx->pc = 0x125780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125780u, 0x464078u, 0x464080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464080u;
label_464080:
    // 0x464080: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x464080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x464084: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x464084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x464088: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x464088u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x46408c: 0x8fa70070  lw          $a3, 0x70($sp)
    ctx->pc = 0x46408cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x464090: 0x8fa80080  lw          $t0, 0x80($sp)
    ctx->pc = 0x464090u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x464094: 0x8fa90090  lw          $t1, 0x90($sp)
    ctx->pc = 0x464094u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x464098: 0xc117eb8  jal         func_45FAE0
    ctx->pc = 0x464098u;
    SET_GPR_U32(ctx, 31, 0x4640A0u);
    ctx->pc = 0x45FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45FAE0u, 0x464098u, 0x4640A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4640A0u;
label_4640a0:
    // 0x4640a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4640a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4640a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4640a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4640a8: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x4640a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x4640ac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4640ACu;
    {
        const bool branch_taken_0x4640ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4640ac) {
            ctx->pc = 0x4640D8u;
            goto label_4640d8;
        }
    }
    ctx->pc = 0x4640B4u;
label_4640b4:
    // 0x4640b4: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x4640b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x4640b8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x4640b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4640bc: 0xc117c14  jal         func_45F050
    ctx->pc = 0x4640BCu;
    SET_GPR_U32(ctx, 31, 0x4640C4u);
    ctx->pc = 0x45F050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45F050u, 0x4640BCu, 0x4640C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4640C4u;
label_4640c4:
    // 0x4640c4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x4640c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4640c8: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x4640c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4640cc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x4640ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4640d0: 0xc117f34  jal         func_45FCD0
    ctx->pc = 0x4640D0u;
    SET_GPR_U32(ctx, 31, 0x4640D8u);
    ctx->pc = 0x45FCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45FCD0u, 0x4640D0u, 0x4640D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4640D8u;
label_4640d8:
    // 0x4640d8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x4640d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4640dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4640dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4640e0: 0x1062fff4  beq         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x4640E0u;
    {
        const bool branch_taken_0x4640e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4640e0) {
            ctx->pc = 0x4640B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4640b4;
        }
    }
    ctx->pc = 0x4640E8u;
    // 0x4640e8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4640e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4640ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4640ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4640f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4640f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4640f4: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x4640f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x4640f8: 0x3e00008  jr          $ra
    ctx->pc = 0x4640F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4640F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x464100u;
}
