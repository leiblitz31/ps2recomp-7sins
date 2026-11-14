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

// Function: sub_00294200
// Address: 0x294200 - 0x294310
void sub_00294200_0x294200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294200_0x294200");
#endif

    switch (ctx->pc) {
        case 0x294234u: goto label_294234;
        case 0x294248u: goto label_294248;
        case 0x29426cu: goto label_29426c;
        case 0x294288u: goto label_294288;
        case 0x2942a0u: goto label_2942a0;
        case 0x2942c8u: goto label_2942c8;
        case 0x2942d8u: goto label_2942d8;
        case 0x2942f4u: goto label_2942f4;
        default: break;
    }

    ctx->pc = 0x294200u;

    // 0x294200: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x294200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x294204: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x294204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x294208: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x294208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29420c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29420cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x294210: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x294210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x294214: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x294214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x294218: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x294218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x29421c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x29421cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x294220: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x294220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x294224: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x294224u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x294228: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x294228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29422c: 0xc0a5138  jal         func_2944E0
    ctx->pc = 0x29422Cu;
    SET_GPR_U32(ctx, 31, 0x294234u);
    ctx->pc = 0x2944E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2944E0u, 0x29422Cu, 0x294234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294234u;
label_294234:
    // 0x294234: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x294234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x294238: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x294238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x29423c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x29423cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x294240: 0xc041954  jal         func_106550
    ctx->pc = 0x294240u;
    SET_GPR_U32(ctx, 31, 0x294248u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x294240u, 0x294248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294248u;
label_294248:
    // 0x294248: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x294248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x29424c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x29424cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x294250: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x294250u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x294254: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x294254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x294258: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x294258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x29425c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29425cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294260: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x294260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294264: 0xc0a5b9c  jal         func_296E70
    ctx->pc = 0x294264u;
    SET_GPR_U32(ctx, 31, 0x29426Cu);
    ctx->pc = 0x296E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E70u, 0x294264u, 0x29426Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29426Cu;
label_29426c:
    // 0x29426c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29426cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294270: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x294270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x294274: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x294274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x294278: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x294278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29427c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x29427cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294280: 0xc041934  jal         func_1064D0
    ctx->pc = 0x294280u;
    SET_GPR_U32(ctx, 31, 0x294288u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x294280u, 0x294288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294288u;
label_294288:
    // 0x294288: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x294288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29428c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29428cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294290: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x294290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x294294: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x294294u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x294298: 0xc0a511c  jal         func_294470
    ctx->pc = 0x294298u;
    SET_GPR_U32(ctx, 31, 0x2942A0u);
    ctx->pc = 0x294470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294470u, 0x294298u, 0x2942A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2942A0u;
label_2942a0:
    // 0x2942a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2942a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2942a4: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x2942a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2942a8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2942A8u;
    {
        const bool branch_taken_0x2942a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2942a8) {
            ctx->pc = 0x2942CCu;
            goto label_2942cc;
        }
    }
    ctx->pc = 0x2942B0u;
    // 0x2942b0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2942b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2942b4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2942b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2942b8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2942b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2942bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2942bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2942c0: 0xc041934  jal         func_1064D0
    ctx->pc = 0x2942C0u;
    SET_GPR_U32(ctx, 31, 0x2942C8u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x2942C0u, 0x2942C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2942C8u;
label_2942c8:
    // 0x2942c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2942c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2942cc:
    // 0x2942cc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2942ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2942d0: 0xc0a50d8  jal         func_294360
    ctx->pc = 0x2942D0u;
    SET_GPR_U32(ctx, 31, 0x2942D8u);
    ctx->pc = 0x294360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294360u, 0x2942D0u, 0x2942D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2942D8u;
label_2942d8:
    // 0x2942d8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2942d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2942dc: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x2942dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2942e0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2942e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2942e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2942e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2942e8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2942e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2942ec: 0xc0a50c4  jal         func_294310
    ctx->pc = 0x2942ECu;
    SET_GPR_U32(ctx, 31, 0x2942F4u);
    ctx->pc = 0x294310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294310u, 0x2942ECu, 0x2942F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2942F4u;
label_2942f4:
    // 0x2942f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2942f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2942f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2942f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2942fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2942fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294300: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x294300u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294304: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x294304u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x294308: 0x3e00008  jr          $ra
    ctx->pc = 0x294308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294310u;
}
