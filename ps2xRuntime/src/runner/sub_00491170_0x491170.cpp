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

// Function: sub_00491170
// Address: 0x491170 - 0x4912d0
void sub_00491170_0x491170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00491170_0x491170");
#endif

    switch (ctx->pc) {
        case 0x4911a4u: goto label_4911a4;
        case 0x4911b8u: goto label_4911b8;
        case 0x4911dcu: goto label_4911dc;
        case 0x491204u: goto label_491204;
        case 0x491228u: goto label_491228;
        case 0x491250u: goto label_491250;
        case 0x491280u: goto label_491280;
        case 0x491290u: goto label_491290;
        case 0x4912acu: goto label_4912ac;
        default: break;
    }

    ctx->pc = 0x491170u;

    // 0x491170: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x491170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x491174: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x491174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x491178: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x491178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x49117c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49117cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x491180: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x491180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x491184: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x491184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x491188: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x491188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x49118c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x49118cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x491190: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x491190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x491194: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x491194u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x491198: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x491198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x49119c: 0xc124528  jal         func_4914A0
    ctx->pc = 0x49119Cu;
    SET_GPR_U32(ctx, 31, 0x4911A4u);
    ctx->pc = 0x4914A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4914A0u, 0x49119Cu, 0x4911A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4911A4u;
label_4911a4:
    // 0x4911a4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x4911a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x4911a8: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x4911a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x4911ac: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x4911acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x4911b0: 0xc041954  jal         func_106550
    ctx->pc = 0x4911B0u;
    SET_GPR_U32(ctx, 31, 0x4911B8u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x4911B0u, 0x4911B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4911B8u;
label_4911b8:
    // 0x4911b8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x4911b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x4911bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4911bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4911c0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x4911c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4911c4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x4911c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4911c8: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x4911c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x4911cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4911ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4911d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4911d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4911d4: 0xc124c38  jal         func_4930E0
    ctx->pc = 0x4911D4u;
    SET_GPR_U32(ctx, 31, 0x4911DCu);
    ctx->pc = 0x4930E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4930E0u, 0x4911D4u, 0x4911DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4911DCu;
label_4911dc:
    // 0x4911dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4911dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4911e0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x4911e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4911e4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x4911e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4911e8: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x4911e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x4911ec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4911ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4911f0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x4911f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4911f4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4911f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4911f8: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x4911f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x4911fc: 0xc124508  jal         func_491420
    ctx->pc = 0x4911FCu;
    SET_GPR_U32(ctx, 31, 0x491204u);
    ctx->pc = 0x491420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491420u, 0x4911FCu, 0x491204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491204u;
label_491204:
    // 0x491204: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x491204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x491208: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x491208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x49120c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49120cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x491210: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x491210u;
    {
        const bool branch_taken_0x491210 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x491210) {
            ctx->pc = 0x491234u;
            goto label_491234;
        }
    }
    ctx->pc = 0x491218u;
    // 0x491218: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x491218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49121c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x49121cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x491220: 0xc124538  jal         func_4914E0
    ctx->pc = 0x491220u;
    SET_GPR_U32(ctx, 31, 0x491228u);
    ctx->pc = 0x4914E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4914E0u, 0x491220u, 0x491228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491228u;
label_491228:
    // 0x491228: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x491228u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x49122c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x49122Cu;
    {
        const bool branch_taken_0x49122c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49122c) {
            ctx->pc = 0x491254u;
            goto label_491254;
        }
    }
    ctx->pc = 0x491234u;
label_491234:
    // 0x491234: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x491234u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x491238: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x491238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49123c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x49123cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x491240: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x491240u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x491244: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x491244u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x491248: 0xc1244e8  jal         func_4913A0
    ctx->pc = 0x491248u;
    SET_GPR_U32(ctx, 31, 0x491250u);
    ctx->pc = 0x4913A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4913A0u, 0x491248u, 0x491250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491250u;
label_491250:
    // 0x491250: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x491250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_491254:
    // 0x491254: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x491254u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x491258: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x491258u;
    {
        const bool branch_taken_0x491258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x491258) {
            ctx->pc = 0x491284u;
            goto label_491284;
        }
    }
    ctx->pc = 0x491260u;
    // 0x491260: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x491260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x491264: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x491264u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x491268: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x491268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x49126c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x49126cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x491270: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x491270u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x491274: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x491274u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x491278: 0xc124508  jal         func_491420
    ctx->pc = 0x491278u;
    SET_GPR_U32(ctx, 31, 0x491280u);
    ctx->pc = 0x491420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491420u, 0x491278u, 0x491280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491280u;
label_491280:
    // 0x491280: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x491280u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_491284:
    // 0x491284: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x491284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x491288: 0xc1244c8  jal         func_491320
    ctx->pc = 0x491288u;
    SET_GPR_U32(ctx, 31, 0x491290u);
    ctx->pc = 0x491320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491320u, 0x491288u, 0x491290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491290u;
label_491290:
    // 0x491290: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x491290u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x491294: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x491294u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x491298: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x491298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x49129c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x49129cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4912a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4912a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4912a4: 0xc1244b4  jal         func_4912D0
    ctx->pc = 0x4912A4u;
    SET_GPR_U32(ctx, 31, 0x4912ACu);
    ctx->pc = 0x4912D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4912D0u, 0x4912A4u, 0x4912ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4912ACu;
label_4912ac:
    // 0x4912ac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4912acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4912b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4912b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4912b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4912b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4912b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4912b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4912bc: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x4912bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x4912c0: 0x3e00008  jr          $ra
    ctx->pc = 0x4912C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4912C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4912C8u;
    // 0x4912c8: 0x0  nop
    ctx->pc = 0x4912c8u;
    // NOP
    // 0x4912cc: 0x0  nop
    ctx->pc = 0x4912ccu;
    // NOP
    ctx->pc = 0x4912d0u;
}
