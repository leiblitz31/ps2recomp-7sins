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

// Function: sub_002B04F0
// Address: 0x2b04f0 - 0x2b05c0
void sub_002B04F0_0x2b04f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B04F0_0x2b04f0");
#endif

    switch (ctx->pc) {
        case 0x2b0538u: goto label_2b0538;
        case 0x2b054cu: goto label_2b054c;
        case 0x2b0560u: goto label_2b0560;
        case 0x2b0574u: goto label_2b0574;
        case 0x2b0590u: goto label_2b0590;
        case 0x2b059cu: goto label_2b059c;
        default: break;
    }

    ctx->pc = 0x2b04f0u;

    // 0x2b04f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b04f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2b04f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b04f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b04f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b04f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b04fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b04fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b0500: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2b0500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2b0504: 0xa3a50040  sb          $a1, 0x40($sp)
    ctx->pc = 0x2b0504u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 5));
    // 0x2b0508: 0x8f83bc68  lw          $v1, -0x4398($gp)
    ctx->pc = 0x2b0508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949992)));
    // 0x2b050c: 0x90630071  lbu         $v1, 0x71($v1)
    ctx->pc = 0x2b050cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 113)));
    // 0x2b0510: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b0510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b0514: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2B0514u;
    {
        const bool branch_taken_0x2b0514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0514) {
            ctx->pc = 0x2B059Cu;
            goto label_2b059c;
        }
    }
    ctx->pc = 0x2B051Cu;
    // 0x2b051c: 0x93a20040  lbu         $v0, 0x40($sp)
    ctx->pc = 0x2b051cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b0520: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2B0520u;
    {
        const bool branch_taken_0x2b0520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0520) {
            ctx->pc = 0x2B0590u;
            goto label_2b0590;
        }
    }
    ctx->pc = 0x2B0528u;
    // 0x2b0528: 0x8f82bc68  lw          $v0, -0x4398($gp)
    ctx->pc = 0x2b0528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949992)));
    // 0x2b052c: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x2b052cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2b0530: 0xc0ab594  jal         func_2AD650
    ctx->pc = 0x2B0530u;
    SET_GPR_U32(ctx, 31, 0x2B0538u);
    ctx->pc = 0x2AD650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD650u, 0x2B0530u, 0x2B0538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0538u;
label_2b0538:
    // 0x2b0538: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b0538u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b053c: 0x8f82bc68  lw          $v0, -0x4398($gp)
    ctx->pc = 0x2b053cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949992)));
    // 0x2b0540: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x2b0540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2b0544: 0xc0ab550  jal         func_2AD540
    ctx->pc = 0x2B0544u;
    SET_GPR_U32(ctx, 31, 0x2B054Cu);
    ctx->pc = 0x2AD540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD540u, 0x2B0544u, 0x2B054Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B054Cu;
label_2b054c:
    // 0x2b054c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b054cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0550: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b0550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0554: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2b0554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b0558: 0xc0ac2a8  jal         func_2B0AA0
    ctx->pc = 0x2B0558u;
    SET_GPR_U32(ctx, 31, 0x2B0560u);
    ctx->pc = 0x2B0AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0AA0u, 0x2B0558u, 0x2B0560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0560u;
label_2b0560:
    // 0x2b0560: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b0560u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0564: 0x8f82bc68  lw          $v0, -0x4398($gp)
    ctx->pc = 0x2b0564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949992)));
    // 0x2b0568: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x2b0568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2b056c: 0xc0ab550  jal         func_2AD540
    ctx->pc = 0x2B056Cu;
    SET_GPR_U32(ctx, 31, 0x2B0574u);
    ctx->pc = 0x2AD540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD540u, 0x2B056Cu, 0x2B0574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0574u;
label_2b0574:
    // 0x2b0574: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B0574u;
    {
        const bool branch_taken_0x2b0574 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b0574) {
            ctx->pc = 0x2B0590u;
            goto label_2b0590;
        }
    }
    ctx->pc = 0x2B057Cu;
    // 0x2b057c: 0x8f82bc68  lw          $v0, -0x4398($gp)
    ctx->pc = 0x2b057cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949992)));
    // 0x2b0580: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x2b0580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2b0584: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b0584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0588: 0xc0ab558  jal         func_2AD560
    ctx->pc = 0x2B0588u;
    SET_GPR_U32(ctx, 31, 0x2B0590u);
    ctx->pc = 0x2AD560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD560u, 0x2B0588u, 0x2B0590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0590u;
label_2b0590:
    // 0x2b0590: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2b0590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b0594: 0xc1281d4  jal         func_4A0750
    ctx->pc = 0x2B0594u;
    SET_GPR_U32(ctx, 31, 0x2B059Cu);
    ctx->pc = 0x4A0750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A0750u, 0x2B0594u, 0x2B059Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B059Cu;
label_2b059c:
    // 0x2b059c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b059cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b05a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b05a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b05a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b05a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b05a8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2b05a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2b05ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2B05ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B05ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B05B4u;
    // 0x2b05b4: 0x0  nop
    ctx->pc = 0x2b05b4u;
    // NOP
    // 0x2b05b8: 0x0  nop
    ctx->pc = 0x2b05b8u;
    // NOP
    // 0x2b05bc: 0x0  nop
    ctx->pc = 0x2b05bcu;
    // NOP
    ctx->pc = 0x2b05c0u;
}
