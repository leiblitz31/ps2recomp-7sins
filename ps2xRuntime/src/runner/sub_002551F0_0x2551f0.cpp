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

// Function: sub_002551F0
// Address: 0x2551f0 - 0x255300
void sub_002551F0_0x2551f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002551F0_0x2551f0");
#endif

    switch (ctx->pc) {
        case 0x255224u: goto label_255224;
        case 0x255238u: goto label_255238;
        case 0x25525cu: goto label_25525c;
        case 0x255278u: goto label_255278;
        case 0x255290u: goto label_255290;
        case 0x2552b8u: goto label_2552b8;
        case 0x2552c8u: goto label_2552c8;
        case 0x2552e4u: goto label_2552e4;
        default: break;
    }

    ctx->pc = 0x2551f0u;

    // 0x2551f0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2551f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2551f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2551f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2551f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2551f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2551fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2551fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x255200: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x255200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x255204: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x255204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x255208: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x255208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x25520c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x25520cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x255210: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x255210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x255214: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x255214u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x255218: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x255218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25521c: 0xc095510  jal         func_255440
    ctx->pc = 0x25521Cu;
    SET_GPR_U32(ctx, 31, 0x255224u);
    ctx->pc = 0x255440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255440u, 0x25521Cu, 0x255224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255224u;
label_255224:
    // 0x255224: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x255224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x255228: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x255228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x25522c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x25522cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x255230: 0xc041954  jal         func_106550
    ctx->pc = 0x255230u;
    SET_GPR_U32(ctx, 31, 0x255238u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x255230u, 0x255238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255238u;
label_255238:
    // 0x255238: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x255238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x25523c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x25523cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x255240: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x255240u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x255244: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x255244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x255248: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x255248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x25524c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25524cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255250: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x255250u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255254: 0xc095c88  jal         func_257220
    ctx->pc = 0x255254u;
    SET_GPR_U32(ctx, 31, 0x25525Cu);
    ctx->pc = 0x257220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257220u, 0x255254u, 0x25525Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25525Cu;
label_25525c:
    // 0x25525c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25525cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255260: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x255260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x255264: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x255264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x255268: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x255268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25526c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25526cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255270: 0xc041934  jal         func_1064D0
    ctx->pc = 0x255270u;
    SET_GPR_U32(ctx, 31, 0x255278u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x255270u, 0x255278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255278u;
label_255278:
    // 0x255278: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x255278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25527c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25527cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255280: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x255280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x255284: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x255284u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x255288: 0xc0954f4  jal         func_2553D0
    ctx->pc = 0x255288u;
    SET_GPR_U32(ctx, 31, 0x255290u);
    ctx->pc = 0x2553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2553D0u, 0x255288u, 0x255290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255290u;
label_255290:
    // 0x255290: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x255290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255294: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x255294u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x255298: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x255298u;
    {
        const bool branch_taken_0x255298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x255298) {
            ctx->pc = 0x2552BCu;
            goto label_2552bc;
        }
    }
    ctx->pc = 0x2552A0u;
    // 0x2552a0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2552a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2552a4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2552a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2552a8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2552a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2552ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2552acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2552b0: 0xc041934  jal         func_1064D0
    ctx->pc = 0x2552B0u;
    SET_GPR_U32(ctx, 31, 0x2552B8u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x2552B0u, 0x2552B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2552B8u;
label_2552b8:
    // 0x2552b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2552b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2552bc:
    // 0x2552bc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2552bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2552c0: 0xc0954d4  jal         func_255350
    ctx->pc = 0x2552C0u;
    SET_GPR_U32(ctx, 31, 0x2552C8u);
    ctx->pc = 0x255350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255350u, 0x2552C0u, 0x2552C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2552C8u;
label_2552c8:
    // 0x2552c8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2552c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2552cc: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x2552ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2552d0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2552d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2552d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2552d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2552d8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2552d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2552dc: 0xc0954c0  jal         func_255300
    ctx->pc = 0x2552DCu;
    SET_GPR_U32(ctx, 31, 0x2552E4u);
    ctx->pc = 0x255300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255300u, 0x2552DCu, 0x2552E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2552E4u;
label_2552e4:
    // 0x2552e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2552e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2552e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2552e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2552ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2552ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2552f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2552f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2552f4: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2552f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2552f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2552F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2552F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255300u;
}
