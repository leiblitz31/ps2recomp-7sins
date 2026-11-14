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

// Function: sub_003CD4E0
// Address: 0x3cd4e0 - 0x3cd558
void sub_003CD4E0_0x3cd4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CD4E0_0x3cd4e0");
#endif

    switch (ctx->pc) {
        case 0x3cd530u: goto label_3cd530;
        default: break;
    }

    ctx->pc = 0x3cd4e0u;

    // 0x3cd4e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3cd4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3cd4e4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3cd4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3cd4e8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3cd4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3cd4ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3cd4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3cd4f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3cd4f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd4f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3cd4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3cd4f8: 0x2451e880  addiu       $s1, $v0, -0x1780
    ctx->pc = 0x3cd4f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x3cd4fc: 0x9603003c  lhu         $v1, 0x3C($s0)
    ctx->pc = 0x3cd4fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x3cd500: 0x9622000a  lhu         $v0, 0xA($s1)
    ctx->pc = 0x3cd500u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x61E88Au));
    // 0x3cd504: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3CD504u;
    {
        const bool branch_taken_0x3cd504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3CD508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD504u;
        // 0x3cd508: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd504) {
            ctx->pc = 0x3CD53Cu;
            goto label_3cd53c;
        }
    }
    ctx->pc = 0x3CD50Cu;
    // 0x3cd50c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x3cd50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x3cd510: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x3cd510u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3cd514: 0x8c44b34c  lw          $a0, -0x4CB4($v0)
    ctx->pc = 0x3cd514u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5DB34Cu));
    // 0x3cd518: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3cd518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3cd51c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3CD51Cu;
    {
        const bool branch_taken_0x3cd51c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CD520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD51Cu;
        // 0x3cd520: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd51c) {
            ctx->pc = 0x3CD53Cu;
            goto label_3cd53c;
        }
    }
    ctx->pc = 0x3CD524u;
    // 0x3cd524: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3cd524u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x3cd528: 0xc1036e0  jal         func_40DB80
    ctx->pc = 0x3CD528u;
    SET_GPR_U32(ctx, 31, 0x3CD530u);
    ctx->pc = 0x3CD52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD528u;
    // 0x3cd52c: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3CD528u, 0x3CD530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD530u;
label_3cd530:
    // 0x3cd530: 0x9623000a  lhu         $v1, 0xA($s1)
    ctx->pc = 0x3cd530u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x3cd534: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x3cd534u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x3cd538: 0xa603003c  sh          $v1, 0x3C($s0)
    ctx->pc = 0x3cd538u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 60), (uint16_t)GPR_U32(ctx, 3));
label_3cd53c:
    // 0x3cd53c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3cd53cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd540: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3cd540u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3cd544: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3cd544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3cd548: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3cd548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3cd54c: 0x3e00008  jr          $ra
    ctx->pc = 0x3CD54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CD550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD54Cu;
        // 0x3cd550: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CD54Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CD554u;
    // 0x3cd554: 0x0  nop
    ctx->pc = 0x3cd554u;
    // NOP
    ctx->pc = 0x3cd558u;
}
