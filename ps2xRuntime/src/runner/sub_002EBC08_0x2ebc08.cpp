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

// Function: sub_002EBC08
// Address: 0x2ebc08 - 0x2ebc80
void sub_002EBC08_0x2ebc08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EBC08_0x2ebc08");
#endif

    switch (ctx->pc) {
        case 0x2ebc3cu: goto label_2ebc3c;
        case 0x2ebc64u: goto label_2ebc64;
        default: break;
    }

    ctx->pc = 0x2ebc08u;

    // 0x2ebc08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ebc08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ebc0c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ebc0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2ebc10: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2ebc10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebc14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ebc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ebc18: 0x128040  sll         $s0, $s2, 1
    ctx->pc = 0x2ebc18u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x2ebc1c: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x2ebc1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2ebc20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ebc20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ebc24: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x2ebc24u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2ebc28: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2ebc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2ebc2c: 0x2128023  subu        $s0, $s0, $s2
    ctx->pc = 0x2ebc2cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2ebc30: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x2ebc30u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2ebc34: 0xc0bb542  jal         func_2ED508
    ctx->pc = 0x2EBC34u;
    SET_GPR_U32(ctx, 31, 0x2EBC3Cu);
    ctx->pc = 0x2EBC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBC34u;
    // 0x2ebc38: 0x2605000c  addiu       $a1, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED508u, 0x2EBC34u, 0x2EBC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBC3Cu;
label_2ebc3c:
    // 0x2ebc3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ebc3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebc40: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ebc40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebc44: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2ebc44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebc48: 0x2623000c  addiu       $v1, $s1, 0xC
    ctx->pc = 0x2ebc48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x2ebc4c: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EBC4Cu;
    {
        const bool branch_taken_0x2ebc4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBC4Cu;
        // 0x2ebc50: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebc4c) {
            ctx->pc = 0x2EBC68u;
            goto label_2ebc68;
        }
    }
    ctx->pc = 0x2EBC54u;
    // 0x2ebc54: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x2ebc54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x2ebc58: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2ebc58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2ebc5c: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x2EBC5Cu;
    SET_GPR_U32(ctx, 31, 0x2EBC64u);
    ctx->pc = 0x2EBC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBC5Cu;
    // 0x2ebc60: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x2EBC5Cu, 0x2EBC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBC64u;
label_2ebc64:
    // 0x2ebc64: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ebc64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ebc68:
    // 0x2ebc68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ebc68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ebc6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ebc6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ebc70: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ebc70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ebc74: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2ebc74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ebc78: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBC78u;
        // 0x2ebc7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBC78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBC80u;
}
