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

// Function: sub_002E8230
// Address: 0x2e8230 - 0x2e82b0
void sub_002E8230_0x2e8230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8230_0x2e8230");
#endif

    switch (ctx->pc) {
        case 0x2e8264u: goto label_2e8264;
        case 0x2e8274u: goto label_2e8274;
        default: break;
    }

    ctx->pc = 0x2e8230u;

    // 0x2e8230: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e8230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e8234: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e8234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e8238: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e8238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e823c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2e823cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2e8240: 0x7fbe0000  sq          $fp, 0x0($sp)
    ctx->pc = 0x2e8240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 30));
    // 0x2e8244: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x2e8244u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
    // 0x2e8248: 0x3a0f021  addu        $fp, $sp, $zero
    ctx->pc = 0x2e8248u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 0)));
    // 0x2e824c: 0x24426a80  addiu       $v0, $v0, 0x6A80
    ctx->pc = 0x2e824cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27264));
    // 0x2e8250: 0xafc2003c  sw          $v0, 0x3C($fp)
    ctx->pc = 0x2e8250u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 60), GPR_U32(ctx, 2));
    // 0x2e8254: 0x24848d60  addiu       $a0, $a0, -0x72A0
    ctx->pc = 0x2e8254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937952));
    // 0x2e8258: 0x27c5003c  addiu       $a1, $fp, 0x3C
    ctx->pc = 0x2e8258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 60));
    // 0x2e825c: 0xc0ba7bc  jal         func_2E9EF0
    ctx->pc = 0x2E825Cu;
    SET_GPR_U32(ctx, 31, 0x2E8264u);
    ctx->pc = 0x2E8260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E825Cu;
    // 0x2e8260: 0x24c682b0  addiu       $a2, $a2, -0x7D50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9EF0u, 0x2E825Cu, 0x2E8264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8264u;
label_2e8264:
    // 0x2e8264: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E8264u;
    {
        const bool branch_taken_0x2e8264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8264) {
            ctx->pc = 0x2E8290u;
            goto label_2e8290;
        }
    }
    ctx->pc = 0x2E826Cu;
    // 0x2e826c: 0xc0ba354  jal         func_2E8D50
    ctx->pc = 0x2E826Cu;
    SET_GPR_U32(ctx, 31, 0x2E8274u);
    ctx->pc = 0x2E8270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E826Cu;
    // 0x2e8270: 0x27c40020  addiu       $a0, $fp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8D50u, 0x2E826Cu, 0x2E8274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8274u;
label_2e8274:
    // 0x2e8274: 0x0  nop
    ctx->pc = 0x2e8274u;
    // NOP
    // 0x2e8278: 0x0  nop
    ctx->pc = 0x2e8278u;
    // NOP
    // 0x2e827c: 0x0  nop
    ctx->pc = 0x2e827cu;
    // NOP
    // 0x2e8280: 0x0  nop
    ctx->pc = 0x2e8280u;
    // NOP
    // 0x2e8284: 0x0  nop
    ctx->pc = 0x2e8284u;
    // NOP
    // 0x2e8288: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E8288u;
    {
        const bool branch_taken_0x2e8288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8288) {
            ctx->pc = 0x2E8274u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8274;
        }
    }
    ctx->pc = 0x2E8290u;
label_2e8290:
    // 0x2e8290: 0x3c0e821  addu        $sp, $fp, $zero
    ctx->pc = 0x2e8290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
    // 0x2e8294: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e8294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e8298: 0x7bbe0000  lq          $fp, 0x0($sp)
    ctx->pc = 0x2e8298u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e829c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E829Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E82A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E829Cu;
        // 0x2e82a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E829Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E82A4u;
    // 0x2e82a4: 0x0  nop
    ctx->pc = 0x2e82a4u;
    // NOP
    // 0x2e82a8: 0x0  nop
    ctx->pc = 0x2e82a8u;
    // NOP
    // 0x2e82ac: 0x0  nop
    ctx->pc = 0x2e82acu;
    // NOP
    ctx->pc = 0x2e82b0u;
}
