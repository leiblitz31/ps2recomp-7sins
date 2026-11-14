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

// Function: sub_002FE458
// Address: 0x2fe458 - 0x2fe4f0
void sub_002FE458_0x2fe458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE458_0x2fe458");
#endif

    switch (ctx->pc) {
        case 0x2fe490u: goto label_2fe490;
        case 0x2fe4a4u: goto label_2fe4a4;
        default: break;
    }

    ctx->pc = 0x2fe458u;

    // 0x2fe458: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2fe458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2fe45c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2fe45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2fe460: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2fe460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2fe464: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2fe464u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe468: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2fe468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2fe46c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2fe46cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe470: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fe470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fe474: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x2fe474u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x2fe478: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2fe478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2fe47c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x2fe47cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x2fe480: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FE480u;
    {
        const bool branch_taken_0x2fe480 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe480) {
            ctx->pc = 0x2FE490u;
            goto label_2fe490;
        }
    }
    ctx->pc = 0x2FE488u;
    // 0x2fe488: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x2FE488u;
    SET_GPR_U32(ctx, 31, 0x2FE490u);
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x2FE488u, 0x2FE490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE490u;
label_2fe490:
    // 0x2fe490: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2fe490u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2fe494: 0x3484ffc0  ori         $a0, $a0, 0xFFC0
    ctx->pc = 0x2fe494u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65472);
    // 0x2fe498: 0x2242824  and         $a1, $s1, $a0
    ctx->pc = 0x2fe498u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x2fe49c: 0xc0bf8ec  jal         func_2FE3B0
    ctx->pc = 0x2FE49Cu;
    SET_GPR_U32(ctx, 31, 0x2FE4A4u);
    ctx->pc = 0x2FE4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE49Cu;
    // 0x2fe4a0: 0x2442024  and         $a0, $s2, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE3B0u, 0x2FE49Cu, 0x2FE4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE4A4u;
label_2fe4a4:
    // 0x2fe4a4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FE4A4u;
    {
        const bool branch_taken_0x2fe4a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE4A4u;
        // 0x2fe4a8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe4a4) {
            ctx->pc = 0x2FE4C0u;
            goto label_2fe4c0;
        }
    }
    ctx->pc = 0x2FE4ACu;
    // 0x2fe4ac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2fe4acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fe4b0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2fe4b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fe4b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fe4b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe4b8: 0x80c1f1c  j           func_307C70
    ctx->pc = 0x2FE4B8u;
    ctx->pc = 0x2FE4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE4B8u;
    // 0x2fe4bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307C70u;
    sub_00307C70_0x307c70(rdram, ctx, runtime); return;
    ctx->pc = 0x2FE4C0u;
label_2fe4c0:
    // 0x2fe4c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2fe4c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fe4c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2fe4c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fe4c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fe4c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe4cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE4CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE4CCu;
        // 0x2fe4d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE4CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE4D4u;
    // 0x2fe4d4: 0x0  nop
    ctx->pc = 0x2fe4d4u;
    // NOP
    // 0x2fe4d8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2fe4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2fe4dc: 0x3442ffc0  ori         $v0, $v0, 0xFFC0
    ctx->pc = 0x2fe4dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65472);
    // 0x2fe4e0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x2fe4e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2fe4e4: 0x80bf8ec  j           func_2FE3B0
    ctx->pc = 0x2FE4E4u;
    ctx->pc = 0x2FE4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE4E4u;
    // 0x2fe4e8: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE3B0u;
    sub_002FE3B0_0x2fe3b0(rdram, ctx, runtime); return;
    ctx->pc = 0x2FE4ECu;
    // 0x2fe4ec: 0x0  nop
    ctx->pc = 0x2fe4ecu;
    // NOP
    ctx->pc = 0x2fe4f0u;
}
