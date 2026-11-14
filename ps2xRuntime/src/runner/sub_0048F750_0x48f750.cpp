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

// Function: sub_0048F750
// Address: 0x48f750 - 0x48f850
void sub_0048F750_0x48f750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048F750_0x48f750");
#endif

    switch (ctx->pc) {
        case 0x48f788u: goto label_48f788;
        case 0x48f79cu: goto label_48f79c;
        case 0x48f7acu: goto label_48f7ac;
        case 0x48f7d0u: goto label_48f7d0;
        case 0x48f7f0u: goto label_48f7f0;
        case 0x48f808u: goto label_48f808;
        case 0x48f828u: goto label_48f828;
        default: break;
    }

    ctx->pc = 0x48f750u;

    // 0x48f750: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x48f750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x48f754: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x48f754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x48f758: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x48f758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x48f75c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x48f75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x48f760: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x48f760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x48f764: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48f764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x48f768: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48f768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48f76c: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x48f76cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x48f770: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x48f770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
    // 0x48f774: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x48f774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x48f778: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x48f778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x48f77c: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x48f77cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x48f780: 0xc1239d8  jal         func_48E760
    ctx->pc = 0x48F780u;
    SET_GPR_U32(ctx, 31, 0x48F788u);
    ctx->pc = 0x48E760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E760u, 0x48F780u, 0x48F788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F788u;
label_48f788:
    // 0x48f788: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x48f788u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48f78c: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x48f78cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x48f790: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x48f790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x48f794: 0xc1238f0  jal         func_48E3C0
    ctx->pc = 0x48F794u;
    SET_GPR_U32(ctx, 31, 0x48F79Cu);
    ctx->pc = 0x48E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E3C0u, 0x48F794u, 0x48F79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F79Cu;
label_48f79c:
    // 0x48f79c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x48f79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x48f7a0: 0x27a50078  addiu       $a1, $sp, 0x78
    ctx->pc = 0x48f7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x48f7a4: 0xc123e40  jal         func_48F900
    ctx->pc = 0x48F7A4u;
    SET_GPR_U32(ctx, 31, 0x48F7ACu);
    ctx->pc = 0x48F900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48F900u, 0x48F7A4u, 0x48F7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F7ACu;
label_48f7ac:
    // 0x48f7ac: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x48F7ACu;
    {
        const bool branch_taken_0x48f7ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f7ac) {
            ctx->pc = 0x48F7FCu;
            goto label_48f7fc;
        }
    }
    ctx->pc = 0x48F7B4u;
    // 0x48f7b4: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x48f7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x48f7b8: 0x27b3008c  addiu       $s3, $sp, 0x8C
    ctx->pc = 0x48f7b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x48f7bc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x48f7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x48f7c0: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x48f7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x48f7c4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x48f7c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48f7c8: 0xc123e2c  jal         func_48F8B0
    ctx->pc = 0x48F7C8u;
    SET_GPR_U32(ctx, 31, 0x48F7D0u);
    ctx->pc = 0x48F8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48F8B0u, 0x48F7C8u, 0x48F7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F7D0u;
label_48f7d0:
    // 0x48f7d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48f7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48f7d4: 0x28e3c  dsll32      $s1, $v0, 24
    ctx->pc = 0x48f7d4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 24));
    // 0x48f7d8: 0x118e3f  dsra32      $s1, $s1, 24
    ctx->pc = 0x48f7d8u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
    // 0x48f7dc: 0x27b20060  addiu       $s2, $sp, 0x60
    ctx->pc = 0x48f7dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x48f7e0: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x48f7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x48f7e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x48f7e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48f7e8: 0xc123ef8  jal         func_48FBE0
    ctx->pc = 0x48F7E8u;
    SET_GPR_U32(ctx, 31, 0x48F7F0u);
    ctx->pc = 0x48FBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48FBE0u, 0x48F7E8u, 0x48F7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F7F0u;
label_48f7f0:
    // 0x48f7f0: 0x2450000c  addiu       $s0, $v0, 0xC
    ctx->pc = 0x48f7f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x48f7f4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x48F7F4u;
    {
        const bool branch_taken_0x48f7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f7f4) {
            ctx->pc = 0x48F80Cu;
            goto label_48f80c;
        }
    }
    ctx->pc = 0x48F7FCu;
label_48f7fc:
    // 0x48f7fc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x48f7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x48f800: 0xc123bb4  jal         func_48EED0
    ctx->pc = 0x48F800u;
    SET_GPR_U32(ctx, 31, 0x48F808u);
    ctx->pc = 0x48EED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48EED0u, 0x48F800u, 0x48F808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F808u;
label_48f808:
    // 0x48f808: 0x2450000c  addiu       $s0, $v0, 0xC
    ctx->pc = 0x48f808u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_48f80c:
    // 0x48f80c: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x48f80cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48f810: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x48F810u;
    {
        const bool branch_taken_0x48f810 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f810) {
            ctx->pc = 0x48F828u;
            goto label_48f828;
        }
    }
    ctx->pc = 0x48F818u;
    // 0x48f818: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x48f818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x48f81c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48f81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x48f820: 0xc123e14  jal         func_48F850
    ctx->pc = 0x48F820u;
    SET_GPR_U32(ctx, 31, 0x48F828u);
    ctx->pc = 0x48F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48F850u, 0x48F820u, 0x48F828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F828u;
label_48f828:
    // 0x48f828: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x48f828u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48f82c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x48f82cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x48f830: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x48f830u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48f834: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x48f834u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48f838: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x48f838u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48f83c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48f83cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48f840: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48f840u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48f844: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x48f844u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x48f848: 0x3e00008  jr          $ra
    ctx->pc = 0x48F848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48F848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48F850u;
}
