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

// Function: sub_002FE598
// Address: 0x2fe598 - 0x2fe630
void sub_002FE598_0x2fe598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE598_0x2fe598");
#endif

    switch (ctx->pc) {
        case 0x2fe5d0u: goto label_2fe5d0;
        case 0x2fe5e4u: goto label_2fe5e4;
        default: break;
    }

    ctx->pc = 0x2fe598u;

    // 0x2fe598: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2fe598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2fe59c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2fe59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2fe5a0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2fe5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2fe5a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2fe5a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe5a8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2fe5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2fe5ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2fe5acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe5b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fe5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fe5b4: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x2fe5b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x2fe5b8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2fe5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2fe5bc: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x2fe5bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x2fe5c0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FE5C0u;
    {
        const bool branch_taken_0x2fe5c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe5c0) {
            ctx->pc = 0x2FE5D0u;
            goto label_2fe5d0;
        }
    }
    ctx->pc = 0x2FE5C8u;
    // 0x2fe5c8: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x2FE5C8u;
    SET_GPR_U32(ctx, 31, 0x2FE5D0u);
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x2FE5C8u, 0x2FE5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE5D0u;
label_2fe5d0:
    // 0x2fe5d0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2fe5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2fe5d4: 0x3484ffc0  ori         $a0, $a0, 0xFFC0
    ctx->pc = 0x2fe5d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65472);
    // 0x2fe5d8: 0x2242824  and         $a1, $s1, $a0
    ctx->pc = 0x2fe5d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x2fe5dc: 0xc0bf93c  jal         func_2FE4F0
    ctx->pc = 0x2FE5DCu;
    SET_GPR_U32(ctx, 31, 0x2FE5E4u);
    ctx->pc = 0x2FE5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE5DCu;
    // 0x2fe5e0: 0x2442024  and         $a0, $s2, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE4F0u, 0x2FE5DCu, 0x2FE5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE5E4u;
label_2fe5e4:
    // 0x2fe5e4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FE5E4u;
    {
        const bool branch_taken_0x2fe5e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE5E4u;
        // 0x2fe5e8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe5e4) {
            ctx->pc = 0x2FE600u;
            goto label_2fe600;
        }
    }
    ctx->pc = 0x2FE5ECu;
    // 0x2fe5ec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2fe5ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fe5f0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2fe5f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fe5f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fe5f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe5f8: 0x80c1f1c  j           func_307C70
    ctx->pc = 0x2FE5F8u;
    ctx->pc = 0x2FE5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE5F8u;
    // 0x2fe5fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307C70u;
    sub_00307C70_0x307c70(rdram, ctx, runtime); return;
    ctx->pc = 0x2FE600u;
label_2fe600:
    // 0x2fe600: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2fe600u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fe604: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2fe604u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fe608: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fe608u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe60c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE60Cu;
        // 0x2fe610: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE60Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE614u;
    // 0x2fe614: 0x0  nop
    ctx->pc = 0x2fe614u;
    // NOP
    // 0x2fe618: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2fe618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2fe61c: 0x3442ffc0  ori         $v0, $v0, 0xFFC0
    ctx->pc = 0x2fe61cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65472);
    // 0x2fe620: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x2fe620u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2fe624: 0x80bf93c  j           func_2FE4F0
    ctx->pc = 0x2FE624u;
    ctx->pc = 0x2FE628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE624u;
    // 0x2fe628: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE4F0u;
    sub_002FE4F0_0x2fe4f0(rdram, ctx, runtime); return;
    ctx->pc = 0x2FE62Cu;
    // 0x2fe62c: 0x0  nop
    ctx->pc = 0x2fe62cu;
    // NOP
    ctx->pc = 0x2fe630u;
}
