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

// Function: sub_002FF5F8
// Address: 0x2ff5f8 - 0x2ff6a8
void sub_002FF5F8_0x2ff5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FF5F8_0x2ff5f8");
#endif

    switch (ctx->pc) {
        case 0x2ff638u: goto label_2ff638;
        default: break;
    }

    ctx->pc = 0x2ff5f8u;

    // 0x2ff5f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ff5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ff5fc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2ff5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ff600: 0x3c11004f  lui         $s1, 0x4F
    ctx->pc = 0x2ff600u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)79 << 16));
    // 0x2ff604: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ff604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ff608: 0x8e250b80  lw          $a1, 0xB80($s1)
    ctx->pc = 0x2ff608u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4F0B80u));
    // 0x2ff60c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ff60cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff610: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2ff610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2ff614: 0x28a2007e  slti        $v0, $a1, 0x7E
    ctx->pc = 0x2ff614u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)126) ? 1 : 0);
    // 0x2ff618: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FF618u;
    {
        const bool branch_taken_0x2ff618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FF61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF618u;
        // 0x2ff61c: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff618) {
            ctx->pc = 0x2FF640u;
            goto label_2ff640;
        }
    }
    ctx->pc = 0x2FF620u;
    // 0x2ff620: 0x3c120061  lui         $s2, 0x61
    ctx->pc = 0x2ff620u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)97 << 16));
    // 0x2ff624: 0xae200b80  sw          $zero, 0xB80($s1)
    ctx->pc = 0x2ff624u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2944), GPR_U32(ctx, 0));
    // 0x2ff628: 0x2642f740  addiu       $v0, $s2, -0x8C0
    ctx->pc = 0x2ff628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965056));
    // 0x2ff62c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ff62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff630: 0xc0bfc14  jal         func_2FF050
    ctx->pc = 0x2FF630u;
    SET_GPR_U32(ctx, 31, 0x2FF638u);
    ctx->pc = 0x2FF634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF630u;
    // 0x2ff634: 0xa040007f  sb          $zero, 0x7F($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 127), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF050u, 0x2FF630u, 0x2FF638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF638u;
label_2ff638:
    // 0x2ff638: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FF638u;
    {
        const bool branch_taken_0x2ff638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF638u;
        // 0x2ff63c: 0x8e250b80  lw          $a1, 0xB80($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2944)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff638) {
            ctx->pc = 0x2FF644u;
            goto label_2ff644;
        }
    }
    ctx->pc = 0x2FF640u;
label_2ff640:
    // 0x2ff640: 0x3c120061  lui         $s2, 0x61
    ctx->pc = 0x2ff640u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)97 << 16));
label_2ff644:
    // 0x2ff644: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2ff644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ff648: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2FF648u;
    {
        const bool branch_taken_0x2ff648 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FF64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF648u;
        // 0x2ff64c: 0x2642f740  addiu       $v0, $s2, -0x8C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff648) {
            ctx->pc = 0x2FF680u;
            goto label_2ff680;
        }
    }
    ctx->pc = 0x2FF650u;
    // 0x2ff650: 0x2644f740  addiu       $a0, $s2, -0x8C0
    ctx->pc = 0x2ff650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965056));
    // 0x2ff654: 0xae200b80  sw          $zero, 0xB80($s1)
    ctx->pc = 0x2ff654u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2944), GPR_U32(ctx, 0));
    // 0x2ff658: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x2ff658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2ff65c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ff65cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ff660: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x2ff660u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x2ff664: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ff664u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff668: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ff668u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ff66c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ff66cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ff670: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ff670u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ff674: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2ff674u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ff678: 0x80bfc14  j           func_2FF050
    ctx->pc = 0x2FF678u;
    ctx->pc = 0x2FF67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF678u;
    // 0x2ff67c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF050u;
    sub_002FF050_0x2ff050(rdram, ctx, runtime); return;
    ctx->pc = 0x2FF680u;
label_2ff680:
    // 0x2ff680: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x2ff680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2ff684: 0xae230b80  sw          $v1, 0xB80($s1)
    ctx->pc = 0x2ff684u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2944), GPR_U32(ctx, 3));
    // 0x2ff688: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2ff688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2ff68c: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x2ff68cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x2ff690: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ff690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ff694: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ff694u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ff698: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ff698u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ff69c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ff69cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ff6a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FF6A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF6A0u;
        // 0x2ff6a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF6A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF6A8u;
}
