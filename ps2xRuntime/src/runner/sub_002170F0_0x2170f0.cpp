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

// Function: sub_002170F0
// Address: 0x2170f0 - 0x217250
void sub_002170F0_0x2170f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002170F0_0x2170f0");
#endif

    switch (ctx->pc) {
        case 0x217124u: goto label_217124;
        case 0x217138u: goto label_217138;
        case 0x21715cu: goto label_21715c;
        case 0x217184u: goto label_217184;
        case 0x2171a8u: goto label_2171a8;
        case 0x2171d0u: goto label_2171d0;
        case 0x217200u: goto label_217200;
        case 0x217210u: goto label_217210;
        case 0x21722cu: goto label_21722c;
        default: break;
    }

    ctx->pc = 0x2170f0u;

    // 0x2170f0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2170f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2170f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2170f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2170f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2170f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2170fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2170fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x217100: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x217100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x217104: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x217104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x217108: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x217108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x21710c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x21710cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x217110: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x217110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x217114: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x217114u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x217118: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x217118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21711c: 0xc085b90  jal         func_216E40
    ctx->pc = 0x21711Cu;
    SET_GPR_U32(ctx, 31, 0x217124u);
    ctx->pc = 0x216E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216E40u, 0x21711Cu, 0x217124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217124u;
label_217124:
    // 0x217124: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x217124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x217128: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x217128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x21712c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x21712cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x217130: 0xc041954  jal         func_106550
    ctx->pc = 0x217130u;
    SET_GPR_U32(ctx, 31, 0x217138u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x217130u, 0x217138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217138u;
label_217138:
    // 0x217138: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x217138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x21713c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x21713cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x217140: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x217140u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x217144: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x217144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x217148: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x217148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x21714c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21714cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217150: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x217150u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217154: 0xc085d7c  jal         func_2175F0
    ctx->pc = 0x217154u;
    SET_GPR_U32(ctx, 31, 0x21715Cu);
    ctx->pc = 0x2175F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2175F0u, 0x217154u, 0x21715Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21715Cu;
label_21715c:
    // 0x21715c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21715cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217160: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x217160u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217164: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x217164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x217168: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x217168u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x21716c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x21716cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x217170: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x217170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x217174: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x217174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217178: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x217178u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x21717c: 0xc085d5c  jal         func_217570
    ctx->pc = 0x21717Cu;
    SET_GPR_U32(ctx, 31, 0x217184u);
    ctx->pc = 0x217570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217570u, 0x21717Cu, 0x217184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217184u;
label_217184:
    // 0x217184: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x217184u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217188: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x217188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21718c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21718cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217190: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x217190u;
    {
        const bool branch_taken_0x217190 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x217190) {
            ctx->pc = 0x2171B4u;
            goto label_2171b4;
        }
    }
    ctx->pc = 0x217198u;
    // 0x217198: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x217198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21719c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x21719cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2171a0: 0xc085ce8  jal         func_2173A0
    ctx->pc = 0x2171A0u;
    SET_GPR_U32(ctx, 31, 0x2171A8u);
    ctx->pc = 0x2173A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2173A0u, 0x2171A0u, 0x2171A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2171A8u;
label_2171a8:
    // 0x2171a8: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x2171a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2171ac: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2171ACu;
    {
        const bool branch_taken_0x2171ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2171ac) {
            ctx->pc = 0x2171D4u;
            goto label_2171d4;
        }
    }
    ctx->pc = 0x2171B4u;
label_2171b4:
    // 0x2171b4: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x2171b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x2171b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2171b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2171bc: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x2171bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2171c0: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x2171c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2171c4: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x2171c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x2171c8: 0xc085cc8  jal         func_217320
    ctx->pc = 0x2171C8u;
    SET_GPR_U32(ctx, 31, 0x2171D0u);
    ctx->pc = 0x217320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217320u, 0x2171C8u, 0x2171D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2171D0u;
label_2171d0:
    // 0x2171d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2171d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2171d4:
    // 0x2171d4: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x2171d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2171d8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2171D8u;
    {
        const bool branch_taken_0x2171d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2171d8) {
            ctx->pc = 0x217204u;
            goto label_217204;
        }
    }
    ctx->pc = 0x2171E0u;
    // 0x2171e0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2171e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2171e4: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x2171e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x2171e8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2171e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2171ec: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2171ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2171f0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2171f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2171f4: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2171f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2171f8: 0xc085d5c  jal         func_217570
    ctx->pc = 0x2171F8u;
    SET_GPR_U32(ctx, 31, 0x217200u);
    ctx->pc = 0x217570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217570u, 0x2171F8u, 0x217200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217200u;
label_217200:
    // 0x217200: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x217200u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_217204:
    // 0x217204: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x217204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x217208: 0xc085ca8  jal         func_2172A0
    ctx->pc = 0x217208u;
    SET_GPR_U32(ctx, 31, 0x217210u);
    ctx->pc = 0x2172A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2172A0u, 0x217208u, 0x217210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217210u;
label_217210:
    // 0x217210: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x217210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x217214: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x217214u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x217218: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x217218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21721c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21721cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217220: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x217220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217224: 0xc085c94  jal         func_217250
    ctx->pc = 0x217224u;
    SET_GPR_U32(ctx, 31, 0x21722Cu);
    ctx->pc = 0x217250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217250u, 0x217224u, 0x21722Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21722Cu;
label_21722c:
    // 0x21722c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x21722cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x217230: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x217230u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217234: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x217234u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217238: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x217238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21723c: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x21723cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x217240: 0x3e00008  jr          $ra
    ctx->pc = 0x217240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217248u;
    // 0x217248: 0x0  nop
    ctx->pc = 0x217248u;
    // NOP
    // 0x21724c: 0x0  nop
    ctx->pc = 0x21724cu;
    // NOP
    ctx->pc = 0x217250u;
}
