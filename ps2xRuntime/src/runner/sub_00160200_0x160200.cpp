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

// Function: sub_00160200
// Address: 0x160200 - 0x160330
void sub_00160200_0x160200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160200_0x160200");
#endif

    switch (ctx->pc) {
        case 0x16024cu: goto label_16024c;
        case 0x160268u: goto label_160268;
        case 0x160274u: goto label_160274;
        case 0x160284u: goto label_160284;
        case 0x1602acu: goto label_1602ac;
        case 0x1602fcu: goto label_1602fc;
        case 0x160310u: goto label_160310;
        default: break;
    }

    ctx->pc = 0x160200u;

    // 0x160200: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x160200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x160204: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x160204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x160208: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x160208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16020c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16020cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x160210: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x160210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x160214: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x160214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x160218: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x160218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x16021c: 0xa3a50060  sb          $a1, 0x60($sp)
    ctx->pc = 0x16021cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 5));
    // 0x160220: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x160220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x160224: 0x8c630090  lw          $v1, 0x90($v1)
    ctx->pc = 0x160224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x160228: 0x14600039  bnez        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x160228u;
    {
        const bool branch_taken_0x160228 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x160228) {
            ctx->pc = 0x160310u;
            goto label_160310;
        }
    }
    ctx->pc = 0x160230u;
    // 0x160230: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x160230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x160234: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x160234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x160238: 0xac430090  sw          $v1, 0x90($v0)
    ctx->pc = 0x160238u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 3));
    // 0x16023c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x16023cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x160240: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x160240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160244: 0xc05831c  jal         func_160C70
    ctx->pc = 0x160244u;
    SET_GPR_U32(ctx, 31, 0x16024Cu);
    ctx->pc = 0x160C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160C70u, 0x160244u, 0x16024Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16024Cu;
label_16024c:
    // 0x16024c: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x16024cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x160250: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x160250u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160254: 0x1260001e  beqz        $s3, . + 4 + (0x1E << 2)
    ctx->pc = 0x160254u;
    {
        const bool branch_taken_0x160254 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x160254) {
            ctx->pc = 0x1602D0u;
            goto label_1602d0;
        }
    }
    ctx->pc = 0x16025Cu;
    // 0x16025c: 0x8f84baa8  lw          $a0, -0x4558($gp)
    ctx->pc = 0x16025cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949544)));
    // 0x160260: 0xc0412ec  jal         func_104BB0
    ctx->pc = 0x160260u;
    SET_GPR_U32(ctx, 31, 0x160268u);
    ctx->pc = 0x104BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104BB0u, 0x160260u, 0x160268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160268u;
label_160268:
    // 0x160268: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x160268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16026c: 0xc0ac868  jal         func_2B21A0
    ctx->pc = 0x16026Cu;
    SET_GPR_U32(ctx, 31, 0x160274u);
    ctx->pc = 0x2B21A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B21A0u, 0x16026Cu, 0x160274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160274u;
label_160274:
    // 0x160274: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x160274u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160278: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x160278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16027c: 0xc0afd24  jal         func_2BF490
    ctx->pc = 0x16027Cu;
    SET_GPR_U32(ctx, 31, 0x160284u);
    ctx->pc = 0x2BF490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF490u, 0x16027Cu, 0x160284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160284u;
label_160284:
    // 0x160284: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x160284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x160288: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x160288u;
    {
        const bool branch_taken_0x160288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x160288) {
            ctx->pc = 0x1602A0u;
            goto label_1602a0;
        }
    }
    ctx->pc = 0x160290u;
    // 0x160290: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x160290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x160294: 0x8c500094  lw          $s0, 0x94($v0)
    ctx->pc = 0x160294u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x160298: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x160298u;
    {
        const bool branch_taken_0x160298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160298) {
            ctx->pc = 0x1602D0u;
            goto label_1602d0;
        }
    }
    ctx->pc = 0x1602A0u;
label_1602a0:
    // 0x1602a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1602a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1602a4: 0xc0afd24  jal         func_2BF490
    ctx->pc = 0x1602A4u;
    SET_GPR_U32(ctx, 31, 0x1602ACu);
    ctx->pc = 0x2BF490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF490u, 0x1602A4u, 0x1602ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1602ACu;
label_1602ac:
    // 0x1602ac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1602acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1602b0: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1602B0u;
    {
        const bool branch_taken_0x1602b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1602b0) {
            ctx->pc = 0x1602C8u;
            goto label_1602c8;
        }
    }
    ctx->pc = 0x1602B8u;
    // 0x1602b8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1602b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1602bc: 0x8c500098  lw          $s0, 0x98($v0)
    ctx->pc = 0x1602bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x1602c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1602C0u;
    {
        const bool branch_taken_0x1602c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1602c0) {
            ctx->pc = 0x1602D0u;
            goto label_1602d0;
        }
    }
    ctx->pc = 0x1602C8u;
label_1602c8:
    // 0x1602c8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1602c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1602cc: 0x8c500080  lw          $s0, 0x80($v0)
    ctx->pc = 0x1602ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_1602d0:
    // 0x1602d0: 0x93a20060  lbu         $v0, 0x60($sp)
    ctx->pc = 0x1602d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1602d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1602D4u;
    {
        const bool branch_taken_0x1602d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1602d4) {
            ctx->pc = 0x1602E8u;
            goto label_1602e8;
        }
    }
    ctx->pc = 0x1602DCu;
    // 0x1602dc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1602dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1602e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1602E0u;
    {
        const bool branch_taken_0x1602e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1602e0) {
            ctx->pc = 0x1602ECu;
            goto label_1602ec;
        }
    }
    ctx->pc = 0x1602E8u;
label_1602e8:
    // 0x1602e8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1602e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1602ec:
    // 0x1602ec: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1602ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1602f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1602f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1602f4: 0xc057b30  jal         func_15ECC0
    ctx->pc = 0x1602F4u;
    SET_GPR_U32(ctx, 31, 0x1602FCu);
    ctx->pc = 0x15ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ECC0u, 0x1602F4u, 0x1602FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1602FCu;
label_1602fc:
    // 0x1602fc: 0x8f84bae8  lw          $a0, -0x4518($gp)
    ctx->pc = 0x1602fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949608)));
    // 0x160300: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x160300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160304: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x160304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160308: 0xc0626f0  jal         func_189BC0
    ctx->pc = 0x160308u;
    SET_GPR_U32(ctx, 31, 0x160310u);
    ctx->pc = 0x189BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189BC0u, 0x160308u, 0x160310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160310u;
label_160310:
    // 0x160310: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x160310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x160314: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x160314u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x160318: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x160318u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16031c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16031cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160320: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x160320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160324: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x160324u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x160328: 0x3e00008  jr          $ra
    ctx->pc = 0x160328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160330u;
}
