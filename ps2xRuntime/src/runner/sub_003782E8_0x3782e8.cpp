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

// Function: sub_003782E8
// Address: 0x3782e8 - 0x378348
void sub_003782E8_0x3782e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003782E8_0x3782e8");
#endif

    switch (ctx->pc) {
        case 0x378328u: goto label_378328;
        case 0x378334u: goto label_378334;
        default: break;
    }

    ctx->pc = 0x3782e8u;

    // 0x3782e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3782e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3782ec: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3782ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3782f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3782F0u;
    {
        const bool branch_taken_0x3782f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3782F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3782F0u;
        // 0x3782f4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3782f0) {
            ctx->pc = 0x378310u;
            goto label_378310;
        }
    }
    ctx->pc = 0x3782F8u;
    // 0x3782f8: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3782F8u;
    {
        const bool branch_taken_0x3782f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3782f8) {
            ctx->pc = 0x3782FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3782F8u;
            // 0x3782fc: 0x2402012a  addiu       $v0, $zero, 0x12A (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 298));
            ctx->in_delay_slot = false;
            ctx->pc = 0x378318u;
            goto label_378318;
        }
    }
    ctx->pc = 0x378300u;
    // 0x378300: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x378300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x378304: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x378304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x378308: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x378308u;
    {
        const bool branch_taken_0x378308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37830Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378308u;
        // 0x37830c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378308) {
            ctx->pc = 0x378338u;
            goto label_378338;
        }
    }
    ctx->pc = 0x378310u;
label_378310:
    // 0x378310: 0x2402012a  addiu       $v0, $zero, 0x12A
    ctx->pc = 0x378310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 298));
    // 0x378314: 0x0  nop
    ctx->pc = 0x378314u;
    // NOP
label_378318:
    // 0x378318: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x378318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x37831c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x37831cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x378320: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x378320u;
    SET_GPR_U32(ctx, 31, 0x378328u);
    ctx->pc = 0x378324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378320u;
    // 0x378324: 0x34840016  ori         $a0, $a0, 0x16 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x378320u, 0x378328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378328u;
label_378328:
    // 0x378328: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x378328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37832c: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x37832Cu;
    SET_GPR_U32(ctx, 31, 0x378334u);
    ctx->pc = 0x378330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37832Cu;
    // 0x378330: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x37832Cu, 0x378334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378334u;
label_378334:
    // 0x378334: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x378334u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_378338:
    // 0x378338: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x378338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37833c: 0x3e00008  jr          $ra
    ctx->pc = 0x37833Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x378340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37833Cu;
        // 0x378340: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37833Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x378344u;
    // 0x378344: 0x0  nop
    ctx->pc = 0x378344u;
    // NOP
    ctx->pc = 0x378348u;
}
