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

// Function: sub_00214200
// Address: 0x214200 - 0x214310
void sub_00214200_0x214200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214200_0x214200");
#endif

    switch (ctx->pc) {
        case 0x214234u: goto label_214234;
        case 0x214248u: goto label_214248;
        case 0x21426cu: goto label_21426c;
        case 0x214288u: goto label_214288;
        case 0x2142a0u: goto label_2142a0;
        case 0x2142c8u: goto label_2142c8;
        case 0x2142d8u: goto label_2142d8;
        case 0x2142f4u: goto label_2142f4;
        default: break;
    }

    ctx->pc = 0x214200u;

    // 0x214200: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x214200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x214204: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x214204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x214208: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x214208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21420c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21420cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x214210: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x214210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x214214: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x214214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x214218: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x214218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x21421c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x21421cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x214220: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x214220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x214224: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x214224u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x214228: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x214228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21422c: 0xc085138  jal         func_2144E0
    ctx->pc = 0x21422Cu;
    SET_GPR_U32(ctx, 31, 0x214234u);
    ctx->pc = 0x2144E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2144E0u, 0x21422Cu, 0x214234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214234u;
label_214234:
    // 0x214234: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x214234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x214238: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x214238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x21423c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x21423cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x214240: 0xc041954  jal         func_106550
    ctx->pc = 0x214240u;
    SET_GPR_U32(ctx, 31, 0x214248u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x214240u, 0x214248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214248u;
label_214248:
    // 0x214248: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x214248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x21424c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x21424cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214250: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x214250u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x214254: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x214254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x214258: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x214258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x21425c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21425cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214260: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x214260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214264: 0xc085300  jal         func_214C00
    ctx->pc = 0x214264u;
    SET_GPR_U32(ctx, 31, 0x21426Cu);
    ctx->pc = 0x214C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214C00u, 0x214264u, 0x21426Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21426Cu;
label_21426c:
    // 0x21426c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21426cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214270: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x214270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x214274: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x214274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214278: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x214278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21427c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x21427cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214280: 0xc041934  jal         func_1064D0
    ctx->pc = 0x214280u;
    SET_GPR_U32(ctx, 31, 0x214288u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x214280u, 0x214288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214288u;
label_214288:
    // 0x214288: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x214288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21428c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21428cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214290: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x214290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x214294: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x214294u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x214298: 0xc08511c  jal         func_214470
    ctx->pc = 0x214298u;
    SET_GPR_U32(ctx, 31, 0x2142A0u);
    ctx->pc = 0x214470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214470u, 0x214298u, 0x2142A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2142A0u;
label_2142a0:
    // 0x2142a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2142a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2142a4: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x2142a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2142a8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2142A8u;
    {
        const bool branch_taken_0x2142a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2142a8) {
            ctx->pc = 0x2142CCu;
            goto label_2142cc;
        }
    }
    ctx->pc = 0x2142B0u;
    // 0x2142b0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2142b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2142b4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2142b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2142b8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2142b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2142bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2142bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2142c0: 0xc041934  jal         func_1064D0
    ctx->pc = 0x2142C0u;
    SET_GPR_U32(ctx, 31, 0x2142C8u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x2142C0u, 0x2142C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2142C8u;
label_2142c8:
    // 0x2142c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2142c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2142cc:
    // 0x2142cc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2142ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2142d0: 0xc0850d8  jal         func_214360
    ctx->pc = 0x2142D0u;
    SET_GPR_U32(ctx, 31, 0x2142D8u);
    ctx->pc = 0x214360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214360u, 0x2142D0u, 0x2142D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2142D8u;
label_2142d8:
    // 0x2142d8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2142d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2142dc: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x2142dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2142e0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2142e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2142e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2142e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2142e8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2142e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2142ec: 0xc0850c4  jal         func_214310
    ctx->pc = 0x2142ECu;
    SET_GPR_U32(ctx, 31, 0x2142F4u);
    ctx->pc = 0x214310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214310u, 0x2142ECu, 0x2142F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2142F4u;
label_2142f4:
    // 0x2142f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2142f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2142f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2142f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2142fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2142fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214300: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x214300u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214304: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x214304u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x214308: 0x3e00008  jr          $ra
    ctx->pc = 0x214308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214310u;
}
