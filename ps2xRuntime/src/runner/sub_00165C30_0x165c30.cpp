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

// Function: sub_00165C30
// Address: 0x165c30 - 0x165da0
void sub_00165C30_0x165c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165C30_0x165c30");
#endif

    switch (ctx->pc) {
        case 0x165c4cu: goto label_165c4c;
        case 0x165cbcu: goto label_165cbc;
        case 0x165cdcu: goto label_165cdc;
        case 0x165d0cu: goto label_165d0c;
        case 0x165d60u: goto label_165d60;
        case 0x165d70u: goto label_165d70;
        case 0x165d84u: goto label_165d84;
        default: break;
    }

    ctx->pc = 0x165c30u;

    // 0x165c30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x165c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x165c34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x165c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x165c38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x165c38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x165c3c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x165c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165c40: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x165c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x165c44: 0xc0557e8  jal         func_155FA0
    ctx->pc = 0x165C44u;
    SET_GPR_U32(ctx, 31, 0x165C4Cu);
    ctx->pc = 0x155FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155FA0u, 0x165C44u, 0x165C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165C4Cu;
label_165c4c:
    // 0x165c4c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x165c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x165c50: 0x24633bb0  addiu       $v1, $v1, 0x3BB0
    ctx->pc = 0x165c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15280));
    // 0x165c54: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x165c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165c58: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x165c58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x165c5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x165c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165c60: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x165c60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x165c64: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x165c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165c68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x165c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165c6c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x165c6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x165c70: 0x3e00008  jr          $ra
    ctx->pc = 0x165C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165C78u;
    // 0x165c78: 0x0  nop
    ctx->pc = 0x165c78u;
    // NOP
    // 0x165c7c: 0x0  nop
    ctx->pc = 0x165c7cu;
    // NOP
    // 0x165c80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x165c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x165c84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x165c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x165c88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x165c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x165c8c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x165c8cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x165c90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x165c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165c94: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x165C94u;
    {
        const bool branch_taken_0x165c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165c94) {
            ctx->pc = 0x165CDCu;
            goto label_165cdc;
        }
    }
    ctx->pc = 0x165C9Cu;
    // 0x165c9c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x165c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x165ca0: 0x24633bb0  addiu       $v1, $v1, 0x3BB0
    ctx->pc = 0x165ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15280));
    // 0x165ca4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x165ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165ca8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x165ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x165cac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x165cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165cb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x165cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165cb4: 0xc055950  jal         func_156540
    ctx->pc = 0x165CB4u;
    SET_GPR_U32(ctx, 31, 0x165CBCu);
    ctx->pc = 0x156540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156540u, 0x165CB4u, 0x165CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165CBCu;
label_165cbc:
    // 0x165cbc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x165cbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165cc0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x165cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x165cc4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x165cc4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x165cc8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x165CC8u;
    {
        const bool branch_taken_0x165cc8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x165cc8) {
            ctx->pc = 0x165CDCu;
            goto label_165cdc;
        }
    }
    ctx->pc = 0x165CD0u;
    // 0x165cd0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x165cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165cd4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x165CD4u;
    SET_GPR_U32(ctx, 31, 0x165CDCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x165CD4u, 0x165CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165CDCu;
label_165cdc:
    // 0x165cdc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x165cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165ce0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x165ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165ce4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x165ce4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x165ce8: 0x3e00008  jr          $ra
    ctx->pc = 0x165CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165CE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165CF0u;
    // 0x165cf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x165cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x165cf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x165cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x165cf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x165cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x165cfc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x165cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x165d00: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x165d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165d04: 0xc055974  jal         func_1565D0
    ctx->pc = 0x165D04u;
    SET_GPR_U32(ctx, 31, 0x165D0Cu);
    ctx->pc = 0x1565D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1565D0u, 0x165D04u, 0x165D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165D0Cu;
label_165d0c:
    // 0x165d0c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x165d0cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x165d10: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x165d10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165d14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x165d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165d18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x165d18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165d1c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x165d1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x165d20: 0x3e00008  jr          $ra
    ctx->pc = 0x165D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165D28u;
    // 0x165d28: 0x0  nop
    ctx->pc = 0x165d28u;
    // NOP
    // 0x165d2c: 0x0  nop
    ctx->pc = 0x165d2cu;
    // NOP
    // 0x165d30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x165d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x165d34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x165d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x165d38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x165d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x165d3c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x165d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x165d40: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x165d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165d44: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x165d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x165d48: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x165D48u;
    {
        const bool branch_taken_0x165d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165d48) {
            ctx->pc = 0x165D78u;
            goto label_165d78;
        }
    }
    ctx->pc = 0x165D50u;
    // 0x165d50: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x165d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165d54: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x165d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x165d58: 0xc059768  jal         func_165DA0
    ctx->pc = 0x165D58u;
    SET_GPR_U32(ctx, 31, 0x165D60u);
    ctx->pc = 0x165DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165DA0u, 0x165D58u, 0x165D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165D60u;
label_165d60:
    // 0x165d60: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x165d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165d64: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x165d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x165d68: 0xc119c5c  jal         func_467170
    ctx->pc = 0x165D68u;
    SET_GPR_U32(ctx, 31, 0x165D70u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x165D68u, 0x165D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165D70u;
label_165d70:
    // 0x165d70: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x165d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165d74: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x165d74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
label_165d78:
    // 0x165d78: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x165d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165d7c: 0xc0559ac  jal         func_1566B0
    ctx->pc = 0x165D7Cu;
    SET_GPR_U32(ctx, 31, 0x165D84u);
    ctx->pc = 0x1566B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1566B0u, 0x165D7Cu, 0x165D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165D84u;
label_165d84:
    // 0x165d84: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x165d84u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x165d88: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x165d88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165d8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x165d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165d90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x165d90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165d94: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x165d94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x165d98: 0x3e00008  jr          $ra
    ctx->pc = 0x165D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165DA0u;
}
