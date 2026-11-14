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

// Function: sub_0032A7F0
// Address: 0x32a7f0 - 0x32a848
void sub_0032A7F0_0x32a7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A7F0_0x32a7f0");
#endif

    switch (ctx->pc) {
        case 0x32a80cu: goto label_32a80c;
        case 0x32a828u: goto label_32a828;
        default: break;
    }

    ctx->pc = 0x32a7f0u;

    // 0x32a7f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32a7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32a7f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32a7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32a7f8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x32a7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x32a7fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32a7fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a800: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32a800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32a804: 0xc0ca0f8  jal         func_3283E0
    ctx->pc = 0x32A804u;
    SET_GPR_U32(ctx, 31, 0x32A80Cu);
    ctx->pc = 0x32A808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A804u;
    // 0x32a808: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3283E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3283E0u, 0x32A804u, 0x32A80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A80Cu;
label_32a80c:
    // 0x32a80c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32A80Cu;
    {
        const bool branch_taken_0x32a80c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A80Cu;
        // 0x32a810: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a80c) {
            ctx->pc = 0x32A81Cu;
            goto label_32a81c;
        }
    }
    ctx->pc = 0x32A814u;
    // 0x32a814: 0x56020001  bnel        $s0, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x32A814u;
    {
        const bool branch_taken_0x32a814 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x32a814) {
            ctx->pc = 0x32A818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A814u;
            // 0x32a818: 0x2e020003  sltiu       $v0, $s0, 0x3 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A81Cu;
            goto label_32a81c;
        }
    }
    ctx->pc = 0x32A81Cu;
label_32a81c:
    // 0x32a81c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x32a81cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x32a820: 0xc0caa5e  jal         func_32A978
    ctx->pc = 0x32A820u;
    SET_GPR_U32(ctx, 31, 0x32A828u);
    ctx->pc = 0x32A824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A820u;
    // 0x32a824: 0x34841015  ori         $a0, $a0, 0x1015 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4117);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A978u, 0x32A820u, 0x32A828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A828u;
label_32a828:
    // 0x32a828: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x32a828u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
    // 0x32a82c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x32a82cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a830: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x32a830u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32a834: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32a834u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32a838: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32a838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a83c: 0x3e00008  jr          $ra
    ctx->pc = 0x32A83Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A83Cu;
        // 0x32a840: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A83Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A844u;
    // 0x32a844: 0x0  nop
    ctx->pc = 0x32a844u;
    // NOP
    ctx->pc = 0x32a848u;
}
