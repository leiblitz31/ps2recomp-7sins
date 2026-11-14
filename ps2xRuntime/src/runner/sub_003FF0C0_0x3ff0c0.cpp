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

// Function: sub_003FF0C0
// Address: 0x3ff0c0 - 0x3ff230
void sub_003FF0C0_0x3ff0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FF0C0_0x3ff0c0");
#endif

    switch (ctx->pc) {
        case 0x3ff0c0u: goto label_3ff0c0;
        case 0x3ff0c4u: goto label_3ff0c4;
        case 0x3ff0c8u: goto label_3ff0c8;
        case 0x3ff0ccu: goto label_3ff0cc;
        case 0x3ff0d0u: goto label_3ff0d0;
        case 0x3ff0d4u: goto label_3ff0d4;
        case 0x3ff0d8u: goto label_3ff0d8;
        case 0x3ff0dcu: goto label_3ff0dc;
        case 0x3ff0e0u: goto label_3ff0e0;
        case 0x3ff0e4u: goto label_3ff0e4;
        case 0x3ff0e8u: goto label_3ff0e8;
        case 0x3ff0ecu: goto label_3ff0ec;
        case 0x3ff0f0u: goto label_3ff0f0;
        case 0x3ff0f4u: goto label_3ff0f4;
        case 0x3ff0f8u: goto label_3ff0f8;
        case 0x3ff0fcu: goto label_3ff0fc;
        case 0x3ff100u: goto label_3ff100;
        case 0x3ff104u: goto label_3ff104;
        case 0x3ff108u: goto label_3ff108;
        case 0x3ff10cu: goto label_3ff10c;
        case 0x3ff110u: goto label_3ff110;
        case 0x3ff114u: goto label_3ff114;
        case 0x3ff118u: goto label_3ff118;
        case 0x3ff11cu: goto label_3ff11c;
        case 0x3ff120u: goto label_3ff120;
        case 0x3ff124u: goto label_3ff124;
        case 0x3ff128u: goto label_3ff128;
        case 0x3ff12cu: goto label_3ff12c;
        case 0x3ff130u: goto label_3ff130;
        case 0x3ff134u: goto label_3ff134;
        case 0x3ff138u: goto label_3ff138;
        case 0x3ff13cu: goto label_3ff13c;
        case 0x3ff140u: goto label_3ff140;
        case 0x3ff144u: goto label_3ff144;
        case 0x3ff148u: goto label_3ff148;
        case 0x3ff14cu: goto label_3ff14c;
        case 0x3ff150u: goto label_3ff150;
        case 0x3ff154u: goto label_3ff154;
        case 0x3ff158u: goto label_3ff158;
        case 0x3ff15cu: goto label_3ff15c;
        case 0x3ff160u: goto label_3ff160;
        case 0x3ff164u: goto label_3ff164;
        case 0x3ff168u: goto label_3ff168;
        case 0x3ff16cu: goto label_3ff16c;
        case 0x3ff170u: goto label_3ff170;
        case 0x3ff174u: goto label_3ff174;
        case 0x3ff178u: goto label_3ff178;
        case 0x3ff17cu: goto label_3ff17c;
        case 0x3ff180u: goto label_3ff180;
        case 0x3ff184u: goto label_3ff184;
        case 0x3ff188u: goto label_3ff188;
        case 0x3ff18cu: goto label_3ff18c;
        case 0x3ff190u: goto label_3ff190;
        case 0x3ff194u: goto label_3ff194;
        case 0x3ff198u: goto label_3ff198;
        case 0x3ff19cu: goto label_3ff19c;
        case 0x3ff1a0u: goto label_3ff1a0;
        case 0x3ff1a4u: goto label_3ff1a4;
        case 0x3ff1a8u: goto label_3ff1a8;
        case 0x3ff1acu: goto label_3ff1ac;
        case 0x3ff1b0u: goto label_3ff1b0;
        case 0x3ff1b4u: goto label_3ff1b4;
        case 0x3ff1b8u: goto label_3ff1b8;
        case 0x3ff1bcu: goto label_3ff1bc;
        case 0x3ff1c0u: goto label_3ff1c0;
        case 0x3ff1c4u: goto label_3ff1c4;
        case 0x3ff1c8u: goto label_3ff1c8;
        case 0x3ff1ccu: goto label_3ff1cc;
        case 0x3ff1d0u: goto label_3ff1d0;
        case 0x3ff1d4u: goto label_3ff1d4;
        case 0x3ff1d8u: goto label_3ff1d8;
        case 0x3ff1dcu: goto label_3ff1dc;
        case 0x3ff1e0u: goto label_3ff1e0;
        case 0x3ff1e4u: goto label_3ff1e4;
        case 0x3ff1e8u: goto label_3ff1e8;
        case 0x3ff1ecu: goto label_3ff1ec;
        case 0x3ff1f0u: goto label_3ff1f0;
        case 0x3ff1f4u: goto label_3ff1f4;
        case 0x3ff1f8u: goto label_3ff1f8;
        case 0x3ff1fcu: goto label_3ff1fc;
        case 0x3ff200u: goto label_3ff200;
        case 0x3ff204u: goto label_3ff204;
        case 0x3ff208u: goto label_3ff208;
        case 0x3ff20cu: goto label_3ff20c;
        case 0x3ff210u: goto label_3ff210;
        case 0x3ff214u: goto label_3ff214;
        case 0x3ff218u: goto label_3ff218;
        case 0x3ff21cu: goto label_3ff21c;
        case 0x3ff220u: goto label_3ff220;
        case 0x3ff224u: goto label_3ff224;
        case 0x3ff228u: goto label_3ff228;
        case 0x3ff22cu: goto label_3ff22c;
        default: break;
    }

    ctx->pc = 0x3ff0c0u;

label_3ff0c0:
    // 0x3ff0c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ff0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3ff0c4:
    // 0x3ff0c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3ff0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3ff0c8:
    // 0x3ff0c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ff0c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ff0cc:
    // 0x3ff0cc: 0x12000053  beqz        $s0, . + 4 + (0x53 << 2)
label_3ff0d0:
    if (ctx->pc == 0x3FF0D0u) {
        ctx->pc = 0x3FF0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF0CCu;
        // 0x3ff0d0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF0D4u;
        goto label_3ff0d4;
    }
    ctx->pc = 0x3FF0CCu;
    {
        const bool branch_taken_0x3ff0cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF0CCu;
        // 0x3ff0d0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff0cc) {
            ctx->pc = 0x3FF21Cu;
            goto label_3ff21c;
        }
    }
    ctx->pc = 0x3FF0D4u;
label_3ff0d4:
    // 0x3ff0d4: 0xde020108  ld          $v0, 0x108($s0)
    ctx->pc = 0x3ff0d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
label_3ff0d8:
    // 0x3ff0d8: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x3ff0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_3ff0dc:
    // 0x3ff0dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3ff0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3ff0e0:
    // 0x3ff0e0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_3ff0e4:
    if (ctx->pc == 0x3FF0E4u) {
        ctx->pc = 0x3FF0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF0E0u;
        // 0x3ff0e4: 0xde020108  ld          $v0, 0x108($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF0E8u;
        goto label_3ff0e8;
    }
    ctx->pc = 0x3FF0E0u;
    {
        const bool branch_taken_0x3ff0e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ff0e0) {
            ctx->pc = 0x3FF0E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FF0E0u;
            // 0x3ff0e4: 0xde020108  ld          $v0, 0x108($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FF104u;
            goto label_3ff104;
        }
    }
    ctx->pc = 0x3FF0E8u;
label_3ff0e8:
    // 0x3ff0e8: 0x8e0200ec  lw          $v0, 0xEC($s0)
    ctx->pc = 0x3ff0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
label_3ff0ec:
    // 0x3ff0ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3ff0f0:
    if (ctx->pc == 0x3FF0F0u) {
        ctx->pc = 0x3FF0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF0ECu;
        // 0x3ff0f0: 0x260501d0  addiu       $a1, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF0F4u;
        goto label_3ff0f4;
    }
    ctx->pc = 0x3FF0ECu;
    {
        const bool branch_taken_0x3ff0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF0ECu;
        // 0x3ff0f0: 0x260501d0  addiu       $a1, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff0ec) {
            ctx->pc = 0x3FF100u;
            goto label_3ff100;
        }
    }
    ctx->pc = 0x3FF0F4u;
label_3ff0f4:
    // 0x3ff0f4: 0x8e0601bc  lw          $a2, 0x1BC($s0)
    ctx->pc = 0x3ff0f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_3ff0f8:
    // 0x3ff0f8: 0x40f809  jalr        $v0
label_3ff0fc:
    if (ctx->pc == 0x3FF0FCu) {
        ctx->pc = 0x3FF0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF0F8u;
        // 0x3ff0fc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF100u;
        goto label_3ff100;
    }
    ctx->pc = 0x3FF0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3FF100u);
        ctx->pc = 0x3FF0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF0F8u;
        // 0x3ff0fc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FF0F8u, 0x3FF100u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FF100u;
label_3ff100:
    // 0x3ff100: 0xde020108  ld          $v0, 0x108($s0)
    ctx->pc = 0x3ff100u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
label_3ff104:
    // 0x3ff104: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x3ff104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_3ff108:
    // 0x3ff108: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3ff10c:
    if (ctx->pc == 0x3FF10Cu) {
        ctx->pc = 0x3FF10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF108u;
        // 0x3ff10c: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF110u;
        goto label_3ff110;
    }
    ctx->pc = 0x3FF108u;
    {
        const bool branch_taken_0x3ff108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF108u;
        // 0x3ff10c: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff108) {
            ctx->pc = 0x3FF120u;
            goto label_3ff120;
        }
    }
    ctx->pc = 0x3FF110u;
label_3ff110:
    // 0x3ff110: 0x8e0501bc  lw          $a1, 0x1BC($s0)
    ctx->pc = 0x3ff110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_3ff114:
    // 0x3ff114: 0xde060100  ld          $a2, 0x100($s0)
    ctx->pc = 0x3ff114u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 256)));
label_3ff118:
    // 0x3ff118: 0xc0fefaa  jal         func_3FBEA8
label_3ff11c:
    if (ctx->pc == 0x3FF11Cu) {
        ctx->pc = 0x3FF11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF118u;
        // 0x3ff11c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF120u;
        goto label_3ff120;
    }
    ctx->pc = 0x3FF118u;
    SET_GPR_U32(ctx, 31, 0x3FF120u);
    ctx->pc = 0x3FF11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF118u;
    // 0x3ff11c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FBEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FBEA8u, 0x3FF118u, 0x3FF120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF120u;
label_3ff120:
    // 0x3ff120: 0xde020108  ld          $v0, 0x108($s0)
    ctx->pc = 0x3ff120u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
label_3ff124:
    // 0x3ff124: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3ff124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_3ff128:
    // 0x3ff128: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3ff128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3ff12c:
    // 0x3ff12c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3ff130:
    if (ctx->pc == 0x3FF130u) {
        ctx->pc = 0x3FF130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF12Cu;
        // 0x3ff130: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF134u;
        goto label_3ff134;
    }
    ctx->pc = 0x3FF12Cu;
    {
        const bool branch_taken_0x3ff12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF12Cu;
        // 0x3ff130: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff12c) {
            ctx->pc = 0x3FF140u;
            goto label_3ff140;
        }
    }
    ctx->pc = 0x3FF134u;
label_3ff134:
    // 0x3ff134: 0x8e0501bc  lw          $a1, 0x1BC($s0)
    ctx->pc = 0x3ff134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_3ff138:
    // 0x3ff138: 0xc0ff41e  jal         func_3FD078
label_3ff13c:
    if (ctx->pc == 0x3FF13Cu) {
        ctx->pc = 0x3FF13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF138u;
        // 0x3ff13c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF140u;
        goto label_3ff140;
    }
    ctx->pc = 0x3FF138u;
    SET_GPR_U32(ctx, 31, 0x3FF140u);
    ctx->pc = 0x3FF13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF138u;
    // 0x3ff13c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD078u, 0x3FF138u, 0x3FF140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF140u;
label_3ff140:
    // 0x3ff140: 0xde020108  ld          $v0, 0x108($s0)
    ctx->pc = 0x3ff140u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
label_3ff144:
    // 0x3ff144: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3ff144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_3ff148:
    // 0x3ff148: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3ff14c:
    if (ctx->pc == 0x3FF14Cu) {
        ctx->pc = 0x3FF14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF148u;
        // 0x3ff14c: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF150u;
        goto label_3ff150;
    }
    ctx->pc = 0x3FF148u;
    {
        const bool branch_taken_0x3ff148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF148u;
        // 0x3ff14c: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff148) {
            ctx->pc = 0x3FF160u;
            goto label_3ff160;
        }
    }
    ctx->pc = 0x3FF150u;
label_3ff150:
    // 0x3ff150: 0x8e0501bc  lw          $a1, 0x1BC($s0)
    ctx->pc = 0x3ff150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_3ff154:
    // 0x3ff154: 0x9206020b  lbu         $a2, 0x20B($s0)
    ctx->pc = 0x3ff154u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 523)));
label_3ff158:
    // 0x3ff158: 0xc0ffc8c  jal         func_3FF230
label_3ff15c:
    if (ctx->pc == 0x3FF15Cu) {
        ctx->pc = 0x3FF15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF158u;
        // 0x3ff15c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF160u;
        goto label_3ff160;
    }
    ctx->pc = 0x3FF158u;
    SET_GPR_U32(ctx, 31, 0x3FF160u);
    ctx->pc = 0x3FF15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF158u;
    // 0x3ff15c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FF230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FF230u, 0x3FF158u, 0x3FF160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF160u;
label_3ff160:
    // 0x3ff160: 0xde020108  ld          $v0, 0x108($s0)
    ctx->pc = 0x3ff160u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
label_3ff164:
    // 0x3ff164: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3ff164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_3ff168:
    // 0x3ff168: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3ff16c:
    if (ctx->pc == 0x3FF16Cu) {
        ctx->pc = 0x3FF16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF168u;
        // 0x3ff16c: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF170u;
        goto label_3ff170;
    }
    ctx->pc = 0x3FF168u;
    {
        const bool branch_taken_0x3ff168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF168u;
        // 0x3ff16c: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff168) {
            ctx->pc = 0x3FF17Cu;
            goto label_3ff17c;
        }
    }
    ctx->pc = 0x3FF170u;
label_3ff170:
    // 0x3ff170: 0x8e0501bc  lw          $a1, 0x1BC($s0)
    ctx->pc = 0x3ff170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_3ff174:
    // 0x3ff174: 0xc0ff3d6  jal         func_3FCF58
label_3ff178:
    if (ctx->pc == 0x3FF178u) {
        ctx->pc = 0x3FF178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF174u;
        // 0x3ff178: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF17Cu;
        goto label_3ff17c;
    }
    ctx->pc = 0x3FF174u;
    SET_GPR_U32(ctx, 31, 0x3FF17Cu);
    ctx->pc = 0x3FF178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF174u;
    // 0x3ff178: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FCF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FCF58u, 0x3FF174u, 0x3FF17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF17Cu;
label_3ff17c:
    // 0x3ff17c: 0xde020108  ld          $v0, 0x108($s0)
    ctx->pc = 0x3ff17cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
label_3ff180:
    // 0x3ff180: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x3ff180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_3ff184:
    // 0x3ff184: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3ff188:
    if (ctx->pc == 0x3FF188u) {
        ctx->pc = 0x3FF188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF184u;
        // 0x3ff188: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF18Cu;
        goto label_3ff18c;
    }
    ctx->pc = 0x3FF184u;
    {
        const bool branch_taken_0x3ff184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF184u;
        // 0x3ff188: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff184) {
            ctx->pc = 0x3FF19Cu;
            goto label_3ff19c;
        }
    }
    ctx->pc = 0x3FF18Cu;
label_3ff18c:
    // 0x3ff18c: 0x8e0501bc  lw          $a1, 0x1BC($s0)
    ctx->pc = 0x3ff18cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_3ff190:
    // 0x3ff190: 0x26060271  addiu       $a2, $s0, 0x271
    ctx->pc = 0x3ff190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 625));
label_3ff194:
    // 0x3ff194: 0xc0ffe02  jal         func_3FF808
label_3ff198:
    if (ctx->pc == 0x3FF198u) {
        ctx->pc = 0x3FF198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF194u;
        // 0x3ff198: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF19Cu;
        goto label_3ff19c;
    }
    ctx->pc = 0x3FF194u;
    SET_GPR_U32(ctx, 31, 0x3FF19Cu);
    ctx->pc = 0x3FF198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF194u;
    // 0x3ff198: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FF808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FF808u, 0x3FF194u, 0x3FF19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF19Cu;
label_3ff19c:
    // 0x3ff19c: 0xde020108  ld          $v0, 0x108($s0)
    ctx->pc = 0x3ff19cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
label_3ff1a0:
    // 0x3ff1a0: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x3ff1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_3ff1a4:
    // 0x3ff1a4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3ff1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3ff1a8:
    // 0x3ff1a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3ff1ac:
    if (ctx->pc == 0x3FF1ACu) {
        ctx->pc = 0x3FF1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF1A8u;
        // 0x3ff1ac: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF1B0u;
        goto label_3ff1b0;
    }
    ctx->pc = 0x3FF1A8u;
    {
        const bool branch_taken_0x3ff1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF1A8u;
        // 0x3ff1ac: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff1a8) {
            ctx->pc = 0x3FF1BCu;
            goto label_3ff1bc;
        }
    }
    ctx->pc = 0x3FF1B0u;
label_3ff1b0:
    // 0x3ff1b0: 0x8e0501bc  lw          $a1, 0x1BC($s0)
    ctx->pc = 0x3ff1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_3ff1b4:
    // 0x3ff1b4: 0xc100042  jal         func_400108
label_3ff1b8:
    if (ctx->pc == 0x3FF1B8u) {
        ctx->pc = 0x3FF1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF1B4u;
        // 0x3ff1b8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF1BCu;
        goto label_3ff1bc;
    }
    ctx->pc = 0x3FF1B4u;
    SET_GPR_U32(ctx, 31, 0x3FF1BCu);
    ctx->pc = 0x3FF1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF1B4u;
    // 0x3ff1b8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x400108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x400108u, 0x3FF1B4u, 0x3FF1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF1BCu;
label_3ff1bc:
    // 0x3ff1bc: 0xde020108  ld          $v0, 0x108($s0)
    ctx->pc = 0x3ff1bcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
label_3ff1c0:
    // 0x3ff1c0: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x3ff1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_3ff1c4:
    // 0x3ff1c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3ff1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3ff1c8:
    // 0x3ff1c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3ff1cc:
    if (ctx->pc == 0x3FF1CCu) {
        ctx->pc = 0x3FF1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF1C8u;
        // 0x3ff1cc: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF1D0u;
        goto label_3ff1d0;
    }
    ctx->pc = 0x3FF1C8u;
    {
        const bool branch_taken_0x3ff1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF1C8u;
        // 0x3ff1cc: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff1c8) {
            ctx->pc = 0x3FF1DCu;
            goto label_3ff1dc;
        }
    }
    ctx->pc = 0x3FF1D0u;
label_3ff1d0:
    // 0x3ff1d0: 0x8e0501bc  lw          $a1, 0x1BC($s0)
    ctx->pc = 0x3ff1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_3ff1d4:
    // 0x3ff1d4: 0xc0ffeea  jal         func_3FFBA8
label_3ff1d8:
    if (ctx->pc == 0x3FF1D8u) {
        ctx->pc = 0x3FF1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF1D4u;
        // 0x3ff1d8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF1DCu;
        goto label_3ff1dc;
    }
    ctx->pc = 0x3FF1D4u;
    SET_GPR_U32(ctx, 31, 0x3FF1DCu);
    ctx->pc = 0x3FF1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF1D4u;
    // 0x3ff1d8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FFBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FFBA8u, 0x3FF1D4u, 0x3FF1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF1DCu;
label_3ff1dc:
    // 0x3ff1dc: 0xde020108  ld          $v0, 0x108($s0)
    ctx->pc = 0x3ff1dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
label_3ff1e0:
    // 0x3ff1e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3ff1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3ff1e4:
    // 0x3ff1e4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3ff1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_3ff1e8:
    // 0x3ff1e8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3ff1e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_3ff1ec:
    // 0x3ff1ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3ff1f0:
    if (ctx->pc == 0x3FF1F0u) {
        ctx->pc = 0x3FF1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF1ECu;
        // 0x3ff1f0: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF1F4u;
        goto label_3ff1f4;
    }
    ctx->pc = 0x3FF1ECu;
    {
        const bool branch_taken_0x3ff1ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF1ECu;
        // 0x3ff1f0: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff1ec) {
            ctx->pc = 0x3FF200u;
            goto label_3ff200;
        }
    }
    ctx->pc = 0x3FF1F4u;
label_3ff1f4:
    // 0x3ff1f4: 0x8e0501bc  lw          $a1, 0x1BC($s0)
    ctx->pc = 0x3ff1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_3ff1f8:
    // 0x3ff1f8: 0xc0ff21a  jal         func_3FC868
label_3ff1fc:
    if (ctx->pc == 0x3FF1FCu) {
        ctx->pc = 0x3FF1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF1F8u;
        // 0x3ff1fc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF200u;
        goto label_3ff200;
    }
    ctx->pc = 0x3FF1F8u;
    SET_GPR_U32(ctx, 31, 0x3FF200u);
    ctx->pc = 0x3FF1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF1F8u;
    // 0x3ff1fc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FC868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FC868u, 0x3FF1F8u, 0x3FF200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF200u;
label_3ff200:
    // 0x3ff200: 0xde020108  ld          $v0, 0x108($s0)
    ctx->pc = 0x3ff200u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
label_3ff204:
    // 0x3ff204: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3ff204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_3ff208:
    // 0x3ff208: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3ff20c:
    if (ctx->pc == 0x3FF20Cu) {
        ctx->pc = 0x3FF20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF208u;
        // 0x3ff20c: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF210u;
        goto label_3ff210;
    }
    ctx->pc = 0x3FF208u;
    {
        const bool branch_taken_0x3ff208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF208u;
        // 0x3ff20c: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff208) {
            ctx->pc = 0x3FF21Cu;
            goto label_3ff21c;
        }
    }
    ctx->pc = 0x3FF210u;
label_3ff210:
    // 0x3ff210: 0x8e0501bc  lw          $a1, 0x1BC($s0)
    ctx->pc = 0x3ff210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_3ff214:
    // 0x3ff214: 0xc0ff46c  jal         func_3FD1B0
label_3ff218:
    if (ctx->pc == 0x3FF218u) {
        ctx->pc = 0x3FF218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF214u;
        // 0x3ff218: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF21Cu;
        goto label_3ff21c;
    }
    ctx->pc = 0x3FF214u;
    SET_GPR_U32(ctx, 31, 0x3FF21Cu);
    ctx->pc = 0x3FF218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF214u;
    // 0x3ff218: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD1B0u, 0x3FF214u, 0x3FF21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF21Cu;
label_3ff21c:
    // 0x3ff21c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3ff21cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ff220:
    // 0x3ff220: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ff220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ff224:
    // 0x3ff224: 0x3e00008  jr          $ra
label_3ff228:
    if (ctx->pc == 0x3FF228u) {
        ctx->pc = 0x3FF228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF224u;
        // 0x3ff228: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF22Cu;
        goto label_3ff22c;
    }
    ctx->pc = 0x3FF224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FF228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF224u;
        // 0x3ff228: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FF224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FF22Cu;
label_3ff22c:
    // 0x3ff22c: 0x0  nop
    ctx->pc = 0x3ff22cu;
    // NOP
    ctx->pc = 0x3ff230u;
}
