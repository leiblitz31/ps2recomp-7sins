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

// Function: sub_0025B680
// Address: 0x25b680 - 0x25b820
void sub_0025B680_0x25b680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B680_0x25b680");
#endif

    switch (ctx->pc) {
        case 0x25b6a8u: goto label_25b6a8;
        case 0x25b6bcu: goto label_25b6bc;
        case 0x25b6e0u: goto label_25b6e0;
        case 0x25b700u: goto label_25b700;
        case 0x25b718u: goto label_25b718;
        case 0x25b738u: goto label_25b738;
        case 0x25b744u: goto label_25b744;
        case 0x25b758u: goto label_25b758;
        case 0x25b764u: goto label_25b764;
        case 0x25b778u: goto label_25b778;
        case 0x25b790u: goto label_25b790;
        case 0x25b7acu: goto label_25b7ac;
        case 0x25b7c0u: goto label_25b7c0;
        case 0x25b7d4u: goto label_25b7d4;
        case 0x25b7e8u: goto label_25b7e8;
        case 0x25b7f8u: goto label_25b7f8;
        default: break;
    }

    ctx->pc = 0x25b680u;

    // 0x25b680: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x25b680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x25b684: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x25b684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x25b688: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25b688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x25b68c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25b68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25b690: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25b690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25b694: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25b694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25b698: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x25b698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x25b69c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x25b69cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b6a0: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x25B6A0u;
    {
        const bool branch_taken_0x25b6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b6a0) {
            ctx->pc = 0x25B780u;
            goto label_25b780;
        }
    }
    ctx->pc = 0x25B6A8u;
label_25b6a8:
    // 0x25b6a8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x25b6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25b6ac: 0x244401f4  addiu       $a0, $v0, 0x1F4
    ctx->pc = 0x25b6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 500));
    // 0x25b6b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25b6b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b6b4: 0xc0966fc  jal         func_259BF0
    ctx->pc = 0x25B6B4u;
    SET_GPR_U32(ctx, 31, 0x25B6BCu);
    ctx->pc = 0x259BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259BF0u, 0x25B6B4u, 0x25B6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B6BCu;
label_25b6bc:
    // 0x25b6bc: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x25b6bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25b6c0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x25b6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x25b6c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25b6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25b6c8: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x25B6C8u;
    {
        const bool branch_taken_0x25b6c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25b6c8) {
            ctx->pc = 0x25B704u;
            goto label_25b704;
        }
    }
    ctx->pc = 0x25B6D0u;
    // 0x25b6d0: 0x8e330000  lw          $s3, 0x0($s1)
    ctx->pc = 0x25b6d0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25b6d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25b6d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b6d8: 0xc096e08  jal         func_25B820
    ctx->pc = 0x25B6D8u;
    SET_GPR_U32(ctx, 31, 0x25B6E0u);
    ctx->pc = 0x25B820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B820u, 0x25B6D8u, 0x25B6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B6E0u;
label_25b6e0:
    // 0x25b6e0: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x25b6e0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25b6e4: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x25B6E4u;
    {
        const bool branch_taken_0x25b6e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b6e4) {
            ctx->pc = 0x25B704u;
            goto label_25b704;
        }
    }
    ctx->pc = 0x25B6ECu;
    // 0x25b6ec: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x25b6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25b6f0: 0x244401f4  addiu       $a0, $v0, 0x1F4
    ctx->pc = 0x25b6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 500));
    // 0x25b6f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25b6f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b6f8: 0xc0966fc  jal         func_259BF0
    ctx->pc = 0x25B6F8u;
    SET_GPR_U32(ctx, 31, 0x25B700u);
    ctx->pc = 0x259BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259BF0u, 0x25B6F8u, 0x25B700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B700u;
label_25b700:
    // 0x25b700: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x25b700u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25b704:
    // 0x25b704: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x25b704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25b708: 0x244401f4  addiu       $a0, $v0, 0x1F4
    ctx->pc = 0x25b708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 500));
    // 0x25b70c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25b70cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b710: 0xc0966fc  jal         func_259BF0
    ctx->pc = 0x25B710u;
    SET_GPR_U32(ctx, 31, 0x25B718u);
    ctx->pc = 0x259BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259BF0u, 0x25B710u, 0x25B718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B718u;
label_25b718:
    // 0x25b718: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x25b718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25b71c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x25B71Cu;
    {
        const bool branch_taken_0x25b71c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b71c) {
            ctx->pc = 0x25B77Cu;
            goto label_25b77c;
        }
    }
    ctx->pc = 0x25B724u;
    // 0x25b724: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x25b724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25b728: 0x244401f4  addiu       $a0, $v0, 0x1F4
    ctx->pc = 0x25b728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 500));
    // 0x25b72c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25b72cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b730: 0xc0966fc  jal         func_259BF0
    ctx->pc = 0x25B730u;
    SET_GPR_U32(ctx, 31, 0x25B738u);
    ctx->pc = 0x259BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259BF0u, 0x25B730u, 0x25B738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B738u;
label_25b738:
    // 0x25b738: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x25b738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25b73c: 0xc0966f4  jal         func_259BD0
    ctx->pc = 0x25B73Cu;
    SET_GPR_U32(ctx, 31, 0x25B744u);
    ctx->pc = 0x259BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259BD0u, 0x25B73Cu, 0x25B744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B744u;
label_25b744:
    // 0x25b744: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x25b744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25b748: 0x244401f4  addiu       $a0, $v0, 0x1F4
    ctx->pc = 0x25b748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 500));
    // 0x25b74c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25b74cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b750: 0xc0966fc  jal         func_259BF0
    ctx->pc = 0x25B750u;
    SET_GPR_U32(ctx, 31, 0x25B758u);
    ctx->pc = 0x259BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259BF0u, 0x25B750u, 0x25B758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B758u;
label_25b758:
    // 0x25b758: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x25b758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25b75c: 0xc119c5c  jal         func_467170
    ctx->pc = 0x25B75Cu;
    SET_GPR_U32(ctx, 31, 0x25B764u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x25B75Cu, 0x25B764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B764u;
label_25b764:
    // 0x25b764: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x25b764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25b768: 0x244401f4  addiu       $a0, $v0, 0x1F4
    ctx->pc = 0x25b768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 500));
    // 0x25b76c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25b76cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b770: 0xc0966fc  jal         func_259BF0
    ctx->pc = 0x25B770u;
    SET_GPR_U32(ctx, 31, 0x25B778u);
    ctx->pc = 0x259BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259BF0u, 0x25B770u, 0x25B778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B778u;
label_25b778:
    // 0x25b778: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x25b778u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_25b77c:
    // 0x25b77c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x25b77cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_25b780:
    // 0x25b780: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x25b780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25b784: 0x244401f4  addiu       $a0, $v0, 0x1F4
    ctx->pc = 0x25b784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 500));
    // 0x25b788: 0xc0966e4  jal         func_259B90
    ctx->pc = 0x25B788u;
    SET_GPR_U32(ctx, 31, 0x25B790u);
    ctx->pc = 0x259B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259B90u, 0x25B788u, 0x25B790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B790u;
label_25b790:
    // 0x25b790: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x25b790u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x25b794: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x25B794u;
    {
        const bool branch_taken_0x25b794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b794) {
            ctx->pc = 0x25B6A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25b6a8;
        }
    }
    ctx->pc = 0x25B79Cu;
    // 0x25b79c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x25b79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25b7a0: 0x244401f4  addiu       $a0, $v0, 0x1F4
    ctx->pc = 0x25b7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 500));
    // 0x25b7a4: 0xc096384  jal         func_258E10
    ctx->pc = 0x25B7A4u;
    SET_GPR_U32(ctx, 31, 0x25B7ACu);
    ctx->pc = 0x258E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258E10u, 0x25B7A4u, 0x25B7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B7ACu;
label_25b7ac:
    // 0x25b7ac: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x25b7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25b7b0: 0x24440148  addiu       $a0, $v0, 0x148
    ctx->pc = 0x25b7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 328));
    // 0x25b7b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25b7b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b7b8: 0xc097064  jal         func_25C190
    ctx->pc = 0x25B7B8u;
    SET_GPR_U32(ctx, 31, 0x25B7C0u);
    ctx->pc = 0x25C190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C190u, 0x25B7B8u, 0x25B7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B7C0u;
label_25b7c0:
    // 0x25b7c0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x25b7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25b7c4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25b7c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25b7c8: 0x24440148  addiu       $a0, $v0, 0x148
    ctx->pc = 0x25b7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 328));
    // 0x25b7cc: 0xc097078  jal         func_25C1E0
    ctx->pc = 0x25B7CCu;
    SET_GPR_U32(ctx, 31, 0x25B7D4u);
    ctx->pc = 0x25C1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C1E0u, 0x25B7CCu, 0x25B7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B7D4u;
label_25b7d4:
    // 0x25b7d4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x25b7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25b7d8: 0x24440148  addiu       $a0, $v0, 0x148
    ctx->pc = 0x25b7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 328));
    // 0x25b7dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25b7dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b7e0: 0xc0970b4  jal         func_25C2D0
    ctx->pc = 0x25B7E0u;
    SET_GPR_U32(ctx, 31, 0x25B7E8u);
    ctx->pc = 0x25C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C2D0u, 0x25B7E0u, 0x25B7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B7E8u;
label_25b7e8:
    // 0x25b7e8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x25b7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25b7ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25b7ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b7f0: 0xc096f9c  jal         func_25BE70
    ctx->pc = 0x25B7F0u;
    SET_GPR_U32(ctx, 31, 0x25B7F8u);
    ctx->pc = 0x25BE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BE70u, 0x25B7F0u, 0x25B7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B7F8u;
label_25b7f8:
    // 0x25b7f8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x25b7f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25b7fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25b7fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25b800: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25b800u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25b804: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25b804u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b808: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25b808u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b80c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x25b80cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x25b810: 0x3e00008  jr          $ra
    ctx->pc = 0x25B810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B818u;
    // 0x25b818: 0x0  nop
    ctx->pc = 0x25b818u;
    // NOP
    // 0x25b81c: 0x0  nop
    ctx->pc = 0x25b81cu;
    // NOP
    ctx->pc = 0x25b820u;
}
