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

// Function: sub_002FE260
// Address: 0x2fe260 - 0x2fe310
void sub_002FE260_0x2fe260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE260_0x2fe260");
#endif

    switch (ctx->pc) {
        case 0x2fe288u: goto label_2fe288;
        case 0x2fe2b8u: goto label_2fe2b8;
        case 0x2fe2ccu: goto label_2fe2cc;
        default: break;
    }

    ctx->pc = 0x2fe260u;

    // 0x2fe260: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2fe260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2fe264: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2fe264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2fe268: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2fe268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2fe26c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2fe26cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2fe270: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fe270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fe274: 0x40116000  mfc0        $s1, Status
    ctx->pc = 0x2fe274u;
    SET_GPR_S32(ctx, 17, (int32_t)ctx->cop0_status);
    // 0x2fe278: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2fe278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2fe27c: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x2fe27cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x2fe280: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x2FE280u;
    {
        const bool branch_taken_0x2fe280 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE280u;
        // 0x2fe284: 0x3c12004f  lui         $s2, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)79 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe280) {
            ctx->pc = 0x2FE2ACu;
            goto label_2fe2ac;
        }
    }
    ctx->pc = 0x2FE288u;
label_2fe288:
    // 0x2fe288: 0x42000039  di
    ctx->pc = 0x2fe288u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x2fe28c: 0x40f  sync.p
    ctx->pc = 0x2fe28cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2fe290: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x2fe290u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x2fe294: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2fe294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2fe298: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2fe298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2fe29c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2FE29Cu;
    {
        const bool branch_taken_0x2fe29c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fe29c) {
            ctx->pc = 0x2FE288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fe288;
        }
    }
    ctx->pc = 0x2FE2A4u;
    // 0x2fe2a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FE2A4u;
    {
        const bool branch_taken_0x2fe2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE2A4u;
        // 0x2fe2a8: 0x8e420b74  lw          $v0, 0xB74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2932)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe2a4) {
            ctx->pc = 0x2FE2B0u;
            goto label_2fe2b0;
        }
    }
    ctx->pc = 0x2FE2ACu;
label_2fe2ac:
    // 0x2fe2ac: 0x8e420b74  lw          $v0, 0xB74($s2)
    ctx->pc = 0x2fe2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2932)));
label_2fe2b0:
    // 0x2fe2b0: 0xc0bf6d0  jal         func_2FDB40
    ctx->pc = 0x2FE2B0u;
    SET_GPR_U32(ctx, 31, 0x2FE2B8u);
    ctx->pc = 0x2FE2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE2B0u;
    // 0x2fe2b4: 0x448021  addu        $s0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB40u, 0x2FE2B0u, 0x2FE2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE2B8u;
label_2fe2b8:
    // 0x2fe2b8: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x2fe2b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2fe2bc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2FE2BCu;
    {
        const bool branch_taken_0x2fe2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE2BCu;
        // 0x2fe2c0: 0x8e420b74  lw          $v0, 0xB74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2932)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe2bc) {
            ctx->pc = 0x2FE2E8u;
            goto label_2fe2e8;
        }
    }
    ctx->pc = 0x2FE2C4u;
    // 0x2fe2c4: 0xc0bae34  jal         func_2EB8D0
    ctx->pc = 0x2FE2C4u;
    SET_GPR_U32(ctx, 31, 0x2FE2CCu);
    ctx->pc = 0x2EB8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB8D0u, 0x2FE2C4u, 0x2FE2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE2CCu;
label_2fe2cc:
    // 0x2fe2cc: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2fe2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2fe2d0: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2FE2D0u;
    {
        const bool branch_taken_0x2fe2d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE2D0u;
        // 0x2fe2d4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe2d0) {
            ctx->pc = 0x2FE2DCu;
            goto label_2fe2dc;
        }
    }
    ctx->pc = 0x2FE2D8u;
    // 0x2fe2d8: 0x42000038  ei
    ctx->pc = 0x2fe2d8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_2fe2dc:
    // 0x2fe2dc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2fe2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2fe2e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2FE2E0u;
    {
        const bool branch_taken_0x2fe2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE2E0u;
        // 0x2fe2e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe2e0) {
            ctx->pc = 0x2FE2F4u;
            goto label_2fe2f4;
        }
    }
    ctx->pc = 0x2FE2E8u;
label_2fe2e8:
    // 0x2fe2e8: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2FE2E8u;
    {
        const bool branch_taken_0x2fe2e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE2E8u;
        // 0x2fe2ec: 0xae500b74  sw          $s0, 0xB74($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2932), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe2e8) {
            ctx->pc = 0x2FE2F4u;
            goto label_2fe2f4;
        }
    }
    ctx->pc = 0x2FE2F0u;
    // 0x2fe2f0: 0x42000038  ei
    ctx->pc = 0x2fe2f0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_2fe2f4:
    // 0x2fe2f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2fe2f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fe2f8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2fe2f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fe2fc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2fe2fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fe300: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fe300u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe304: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE304u;
        // 0x2fe308: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE30Cu;
    // 0x2fe30c: 0x0  nop
    ctx->pc = 0x2fe30cu;
    // NOP
    ctx->pc = 0x2fe310u;
}
