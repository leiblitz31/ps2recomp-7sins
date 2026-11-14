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

// Function: sub_00138C40
// Address: 0x138c40 - 0x138d90
void sub_00138C40_0x138c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138C40_0x138c40");
#endif

    switch (ctx->pc) {
        case 0x138c7cu: goto label_138c7c;
        case 0x138c88u: goto label_138c88;
        case 0x138c9cu: goto label_138c9c;
        case 0x138cacu: goto label_138cac;
        case 0x138cccu: goto label_138ccc;
        case 0x138cecu: goto label_138cec;
        case 0x138d0cu: goto label_138d0c;
        case 0x138d18u: goto label_138d18;
        case 0x138d28u: goto label_138d28;
        case 0x138d48u: goto label_138d48;
        case 0x138d54u: goto label_138d54;
        case 0x138d70u: goto label_138d70;
        default: break;
    }

    ctx->pc = 0x138c40u;

    // 0x138c40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x138c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x138c44: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x138c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x138c48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x138c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x138c4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x138c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x138c50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x138c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x138c54: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x138c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x138c58: 0x8f82ba70  lw          $v0, -0x4590($gp)
    ctx->pc = 0x138c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949488)));
    // 0x138c5c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x138C5Cu;
    {
        const bool branch_taken_0x138c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x138c5c) {
            ctx->pc = 0x138C8Cu;
            goto label_138c8c;
        }
    }
    ctx->pc = 0x138C64u;
    // 0x138c64: 0x8f82ba70  lw          $v0, -0x4590($gp)
    ctx->pc = 0x138c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949488)));
    // 0x138c68: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x138C68u;
    {
        const bool branch_taken_0x138c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x138c68) {
            ctx->pc = 0x138C8Cu;
            goto label_138c8c;
        }
    }
    ctx->pc = 0x138C70u;
    // 0x138c70: 0x8f84ba70  lw          $a0, -0x4590($gp)
    ctx->pc = 0x138c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949488)));
    // 0x138c74: 0xc04e364  jal         func_138D90
    ctx->pc = 0x138C74u;
    SET_GPR_U32(ctx, 31, 0x138C7Cu);
    ctx->pc = 0x138D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138D90u, 0x138C74u, 0x138C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138C7Cu;
label_138c7c:
    // 0x138c7c: 0x8f84ba70  lw          $a0, -0x4590($gp)
    ctx->pc = 0x138c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949488)));
    // 0x138c80: 0xc119c5c  jal         func_467170
    ctx->pc = 0x138C80u;
    SET_GPR_U32(ctx, 31, 0x138C88u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x138C80u, 0x138C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138C88u;
label_138c88:
    // 0x138c88: 0xaf80ba70  sw          $zero, -0x4590($gp)
    ctx->pc = 0x138c88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949488), GPR_U32(ctx, 0));
label_138c8c:
    // 0x138c8c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x138c8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138c90: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x138c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x138c94: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x138C94u;
    SET_GPR_U32(ctx, 31, 0x138C9Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x138C94u, 0x138C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138C9Cu;
label_138c9c:
    // 0x138c9c: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x138c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x138ca0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x138ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138ca4: 0xc0400e0  jal         func_100380
    ctx->pc = 0x138CA4u;
    SET_GPR_U32(ctx, 31, 0x138CACu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x138CA4u, 0x138CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138CACu;
label_138cac:
    // 0x138cac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x138cacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138cb0: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x138CB0u;
    {
        const bool branch_taken_0x138cb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x138cb0) {
            ctx->pc = 0x138CF0u;
            goto label_138cf0;
        }
    }
    ctx->pc = 0x138CB8u;
    // 0x138cb8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x138cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x138cbc: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x138cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x138cc0: 0x24a52720  addiu       $a1, $a1, 0x2720
    ctx->pc = 0x138cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10016));
    // 0x138cc4: 0xc040304  jal         func_100C10
    ctx->pc = 0x138CC4u;
    SET_GPR_U32(ctx, 31, 0x138CCCu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x138CC4u, 0x138CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138CCCu;
label_138ccc:
    // 0x138ccc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x138cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x138cd0: 0x28e3c  dsll32      $s1, $v0, 24
    ctx->pc = 0x138cd0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 24));
    // 0x138cd4: 0x118e3f  dsra32      $s1, $s1, 24
    ctx->pc = 0x138cd4u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
    // 0x138cd8: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x138cd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x138cdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x138cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138ce0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x138ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138ce4: 0xc113cf4  jal         func_44F3D0
    ctx->pc = 0x138CE4u;
    SET_GPR_U32(ctx, 31, 0x138CECu);
    ctx->pc = 0x44F3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44F3D0u, 0x138CE4u, 0x138CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138CECu;
label_138cec:
    // 0x138cec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x138cecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_138cf0:
    // 0x138cf0: 0xaf90ba70  sw          $s0, -0x4590($gp)
    ctx->pc = 0x138cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949488), GPR_U32(ctx, 16));
    // 0x138cf4: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x138CF4u;
    {
        const bool branch_taken_0x138cf4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x138cf4) {
            ctx->pc = 0x138D0Cu;
            goto label_138d0c;
        }
    }
    ctx->pc = 0x138CFCu;
    // 0x138cfc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x138cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x138d00: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x138d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x138d04: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x138D04u;
    SET_GPR_U32(ctx, 31, 0x138D0Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x138D04u, 0x138D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138D0Cu;
label_138d0c:
    // 0x138d0c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x138d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x138d10: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x138D10u;
    SET_GPR_U32(ctx, 31, 0x138D18u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x138D10u, 0x138D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138D18u;
label_138d18:
    // 0x138d18: 0x8f84ba70  lw          $a0, -0x4590($gp)
    ctx->pc = 0x138d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949488)));
    // 0x138d1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x138d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138d20: 0xc114534  jal         func_4514D0
    ctx->pc = 0x138D20u;
    SET_GPR_U32(ctx, 31, 0x138D28u);
    ctx->pc = 0x4514D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4514D0u, 0x138D20u, 0x138D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138D28u;
label_138d28:
    // 0x138d28: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x138D28u;
    {
        const bool branch_taken_0x138d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x138d28) {
            ctx->pc = 0x138D64u;
            goto label_138d64;
        }
    }
    ctx->pc = 0x138D30u;
    // 0x138d30: 0x8f82ba70  lw          $v0, -0x4590($gp)
    ctx->pc = 0x138d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949488)));
    // 0x138d34: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x138D34u;
    {
        const bool branch_taken_0x138d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x138d34) {
            ctx->pc = 0x138D58u;
            goto label_138d58;
        }
    }
    ctx->pc = 0x138D3Cu;
    // 0x138d3c: 0x8f84ba70  lw          $a0, -0x4590($gp)
    ctx->pc = 0x138d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949488)));
    // 0x138d40: 0xc04e364  jal         func_138D90
    ctx->pc = 0x138D40u;
    SET_GPR_U32(ctx, 31, 0x138D48u);
    ctx->pc = 0x138D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138D90u, 0x138D40u, 0x138D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138D48u;
label_138d48:
    // 0x138d48: 0x8f84ba70  lw          $a0, -0x4590($gp)
    ctx->pc = 0x138d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949488)));
    // 0x138d4c: 0xc119c5c  jal         func_467170
    ctx->pc = 0x138D4Cu;
    SET_GPR_U32(ctx, 31, 0x138D54u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x138D4Cu, 0x138D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138D54u;
label_138d54:
    // 0x138d54: 0xaf80ba70  sw          $zero, -0x4590($gp)
    ctx->pc = 0x138d54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949488), GPR_U32(ctx, 0));
label_138d58:
    // 0x138d58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x138d58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138d5c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x138D5Cu;
    {
        const bool branch_taken_0x138d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138d5c) {
            ctx->pc = 0x138D74u;
            goto label_138d74;
        }
    }
    ctx->pc = 0x138D64u;
label_138d64:
    // 0x138d64: 0x8f84ba70  lw          $a0, -0x4590($gp)
    ctx->pc = 0x138d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949488)));
    // 0x138d68: 0xc1147c8  jal         func_451F20
    ctx->pc = 0x138D68u;
    SET_GPR_U32(ctx, 31, 0x138D70u);
    ctx->pc = 0x451F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x451F20u, 0x138D68u, 0x138D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138D70u;
label_138d70:
    // 0x138d70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x138d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_138d74:
    // 0x138d74: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x138d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x138d78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x138d78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x138d7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x138d7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138d80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x138d80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138d84: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x138d84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x138d88: 0x3e00008  jr          $ra
    ctx->pc = 0x138D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138D90u;
}
