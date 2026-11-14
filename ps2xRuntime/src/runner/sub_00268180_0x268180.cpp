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

// Function: sub_00268180
// Address: 0x268180 - 0x2682e0
void sub_00268180_0x268180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00268180_0x268180");
#endif

    switch (ctx->pc) {
        case 0x2681c0u: goto label_2681c0;
        case 0x2681d0u: goto label_2681d0;
        case 0x2681e8u: goto label_2681e8;
        case 0x2681f4u: goto label_2681f4;
        case 0x268210u: goto label_268210;
        case 0x268248u: goto label_268248;
        case 0x268258u: goto label_268258;
        case 0x268270u: goto label_268270;
        case 0x26827cu: goto label_26827c;
        case 0x268298u: goto label_268298;
        default: break;
    }

    ctx->pc = 0x268180u;

    // 0x268180: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x268180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x268184: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x268184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x268188: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x268188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26818c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26818cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x268190: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x268190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x268194: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x268194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x268198: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x268198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x26819c: 0xa3a60060  sb          $a2, 0x60($sp)
    ctx->pc = 0x26819cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 6));
    // 0x2681a0: 0xa3a70070  sb          $a3, 0x70($sp)
    ctx->pc = 0x2681a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 7));
    // 0x2681a4: 0x93a20060  lbu         $v0, 0x60($sp)
    ctx->pc = 0x2681a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2681a8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2681A8u;
    {
        const bool branch_taken_0x2681a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2681a8) {
            ctx->pc = 0x26822Cu;
            goto label_26822c;
        }
    }
    ctx->pc = 0x2681B0u;
    // 0x2681b0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2681b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2681b4: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x2681b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x2681b8: 0xc048bb4  jal         func_122ED0
    ctx->pc = 0x2681B8u;
    SET_GPR_U32(ctx, 31, 0x2681C0u);
    ctx->pc = 0x122ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122ED0u, 0x2681B8u, 0x2681C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2681C0u;
label_2681c0:
    // 0x2681c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2681c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2681c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2681c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2681c8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2681C8u;
    {
        const bool branch_taken_0x2681c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2681c8) {
            ctx->pc = 0x268220u;
            goto label_268220;
        }
    }
    ctx->pc = 0x2681D0u;
label_2681d0:
    // 0x2681d0: 0x8fb20050  lw          $s2, 0x50($sp)
    ctx->pc = 0x2681d0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2681d4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2681d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2681d8: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x2681d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x2681dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2681dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2681e0: 0xc068c94  jal         func_1A3250
    ctx->pc = 0x2681E0u;
    SET_GPR_U32(ctx, 31, 0x2681E8u);
    ctx->pc = 0x1A3250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3250u, 0x2681E0u, 0x2681E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2681E8u;
label_2681e8:
    // 0x2681e8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2681e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2681ec: 0xc09d0b8  jal         func_2742E0
    ctx->pc = 0x2681ECu;
    SET_GPR_U32(ctx, 31, 0x2681F4u);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x2681ECu, 0x2681F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2681F4u;
label_2681f4:
    // 0x2681f4: 0x16420009  bne         $s2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2681F4u;
    {
        const bool branch_taken_0x2681f4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2681f4) {
            ctx->pc = 0x26821Cu;
            goto label_26821c;
        }
    }
    ctx->pc = 0x2681FCu;
    // 0x2681fc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2681fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x268200: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x268200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x268204: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x268204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268208: 0xc068c94  jal         func_1A3250
    ctx->pc = 0x268208u;
    SET_GPR_U32(ctx, 31, 0x268210u);
    ctx->pc = 0x1A3250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3250u, 0x268208u, 0x268210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268210u;
label_268210:
    // 0x268210: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x268210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x268214: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x268214u;
    {
        const bool branch_taken_0x268214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268214) {
            ctx->pc = 0x2682B8u;
            goto label_2682b8;
        }
    }
    ctx->pc = 0x26821Cu;
label_26821c:
    // 0x26821c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x26821cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_268220:
    // 0x268220: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x268220u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x268224: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x268224u;
    {
        const bool branch_taken_0x268224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x268224) {
            ctx->pc = 0x2681D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2681d0;
        }
    }
    ctx->pc = 0x26822Cu;
label_26822c:
    // 0x26822c: 0x93a20070  lbu         $v0, 0x70($sp)
    ctx->pc = 0x26822cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x268230: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x268230u;
    {
        const bool branch_taken_0x268230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268230) {
            ctx->pc = 0x2682B4u;
            goto label_2682b4;
        }
    }
    ctx->pc = 0x268238u;
    // 0x268238: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x268238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26823c: 0x24440048  addiu       $a0, $v0, 0x48
    ctx->pc = 0x26823cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x268240: 0xc048bb4  jal         func_122ED0
    ctx->pc = 0x268240u;
    SET_GPR_U32(ctx, 31, 0x268248u);
    ctx->pc = 0x122ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122ED0u, 0x268240u, 0x268248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268248u;
label_268248:
    // 0x268248: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x268248u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26824c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x26824cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268250: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x268250u;
    {
        const bool branch_taken_0x268250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268250) {
            ctx->pc = 0x2682A8u;
            goto label_2682a8;
        }
    }
    ctx->pc = 0x268258u;
label_268258:
    // 0x268258: 0x8fb20050  lw          $s2, 0x50($sp)
    ctx->pc = 0x268258u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26825c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26825cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x268260: 0x24440048  addiu       $a0, $v0, 0x48
    ctx->pc = 0x268260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x268264: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x268264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268268: 0xc068c94  jal         func_1A3250
    ctx->pc = 0x268268u;
    SET_GPR_U32(ctx, 31, 0x268270u);
    ctx->pc = 0x1A3250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3250u, 0x268268u, 0x268270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268270u;
label_268270:
    // 0x268270: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x268270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x268274: 0xc09d0b8  jal         func_2742E0
    ctx->pc = 0x268274u;
    SET_GPR_U32(ctx, 31, 0x26827Cu);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x268274u, 0x26827Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26827Cu;
label_26827c:
    // 0x26827c: 0x16420009  bne         $s2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26827Cu;
    {
        const bool branch_taken_0x26827c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x26827c) {
            ctx->pc = 0x2682A4u;
            goto label_2682a4;
        }
    }
    ctx->pc = 0x268284u;
    // 0x268284: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x268284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x268288: 0x24440048  addiu       $a0, $v0, 0x48
    ctx->pc = 0x268288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x26828c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26828cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268290: 0xc068c94  jal         func_1A3250
    ctx->pc = 0x268290u;
    SET_GPR_U32(ctx, 31, 0x268298u);
    ctx->pc = 0x1A3250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3250u, 0x268290u, 0x268298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268298u;
label_268298:
    // 0x268298: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x268298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26829c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26829Cu;
    {
        const bool branch_taken_0x26829c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26829c) {
            ctx->pc = 0x2682B8u;
            goto label_2682b8;
        }
    }
    ctx->pc = 0x2682A4u;
label_2682a4:
    // 0x2682a4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2682a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2682a8:
    // 0x2682a8: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x2682a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2682ac: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2682ACu;
    {
        const bool branch_taken_0x2682ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2682ac) {
            ctx->pc = 0x268258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_268258;
        }
    }
    ctx->pc = 0x2682B4u;
label_2682b4:
    // 0x2682b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2682b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2682b8:
    // 0x2682b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2682b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2682bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2682bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2682c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2682c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2682c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2682c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2682c8: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2682c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2682cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2682CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2682CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2682D4u;
    // 0x2682d4: 0x0  nop
    ctx->pc = 0x2682d4u;
    // NOP
    // 0x2682d8: 0x0  nop
    ctx->pc = 0x2682d8u;
    // NOP
    // 0x2682dc: 0x0  nop
    ctx->pc = 0x2682dcu;
    // NOP
    ctx->pc = 0x2682e0u;
}
