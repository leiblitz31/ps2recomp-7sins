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

// Function: sub_0049F920
// Address: 0x49f920 - 0x49f9a0
void sub_0049F920_0x49f920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049F920_0x49f920");
#endif

    switch (ctx->pc) {
        case 0x49f940u: goto label_49f940;
        case 0x49f95cu: goto label_49f95c;
        case 0x49f96cu: goto label_49f96c;
        case 0x49f97cu: goto label_49f97c;
        case 0x49f984u: goto label_49f984;
        default: break;
    }

    ctx->pc = 0x49f920u;

    // 0x49f920: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49f920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x49f924: 0x8f82b828  lw          $v0, -0x47D8($gp)
    ctx->pc = 0x49f924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948904)));
    // 0x49f928: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x49F928u;
    {
        const bool branch_taken_0x49f928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49F92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F928u;
        // 0x49f92c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f928) {
            ctx->pc = 0x49F98Cu;
            goto label_49f98c;
        }
    }
    ctx->pc = 0x49F930u;
    // 0x49f930: 0x8f84b818  lw          $a0, -0x47E8($gp)
    ctx->pc = 0x49f930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948888)));
    // 0x49f934: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x49f934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49f938: 0xc1063a8  jal         func_418EA0
    ctx->pc = 0x49F938u;
    SET_GPR_U32(ctx, 31, 0x49F940u);
    ctx->pc = 0x49F93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49F938u;
    // 0x49f93c: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418EA0u, 0x49F938u, 0x49F940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49F940u;
label_49f940:
    // 0x49f940: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x49F940u;
    {
        const bool branch_taken_0x49f940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49F944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F940u;
        // 0x49f944: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f940) {
            ctx->pc = 0x49F950u;
            goto label_49f950;
        }
    }
    ctx->pc = 0x49F948u;
    // 0x49f948: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x49F948u;
    {
        const bool branch_taken_0x49f948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F948u;
        // 0x49f94c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f948) {
            ctx->pc = 0x49F990u;
            goto label_49f990;
        }
    }
    ctx->pc = 0x49F950u;
label_49f950:
    // 0x49f950: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x49f950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49f954: 0xc106354  jal         func_418D50
    ctx->pc = 0x49F954u;
    SET_GPR_U32(ctx, 31, 0x49F95Cu);
    ctx->pc = 0x49F958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49F954u;
    // 0x49f958: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418D50u, 0x49F954u, 0x49F95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49F95Cu;
label_49f95c:
    // 0x49f95c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x49F95Cu;
    {
        const bool branch_taken_0x49f95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49f95c) {
            ctx->pc = 0x49F97Cu;
            goto label_49f97c;
        }
    }
    ctx->pc = 0x49F964u;
    // 0x49f964: 0xc1062ee  jal         func_418BB8
    ctx->pc = 0x49F964u;
    SET_GPR_U32(ctx, 31, 0x49F96Cu);
    ctx->pc = 0x418BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418BB8u, 0x49F964u, 0x49F96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49F96Cu;
label_49f96c:
    // 0x49f96c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x49F96Cu;
    {
        const bool branch_taken_0x49f96c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49F970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F96Cu;
        // 0x49f970: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f96c) {
            ctx->pc = 0x49F990u;
            goto label_49f990;
        }
    }
    ctx->pc = 0x49F974u;
    // 0x49f974: 0xc106332  jal         func_418CC8
    ctx->pc = 0x49F974u;
    SET_GPR_U32(ctx, 31, 0x49F97Cu);
    ctx->pc = 0x418CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418CC8u, 0x49F974u, 0x49F97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49F97Cu;
label_49f97c:
    // 0x49f97c: 0xc106410  jal         func_419040
    ctx->pc = 0x49F97Cu;
    SET_GPR_U32(ctx, 31, 0x49F984u);
    ctx->pc = 0x419040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419040u, 0x49F97Cu, 0x49F984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49F984u;
label_49f984:
    // 0x49f984: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x49F984u;
    {
        const bool branch_taken_0x49f984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F984u;
        // 0x49f988: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f984) {
            ctx->pc = 0x49F990u;
            goto label_49f990;
        }
    }
    ctx->pc = 0x49F98Cu;
label_49f98c:
    // 0x49f98c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49f98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49f990:
    // 0x49f990: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49f990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49f994: 0x3e00008  jr          $ra
    ctx->pc = 0x49F994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49F998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F994u;
        // 0x49f998: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49F994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49F99Cu;
    // 0x49f99c: 0x0  nop
    ctx->pc = 0x49f99cu;
    // NOP
    ctx->pc = 0x49f9a0u;
}
