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

// Function: sub_0041E1A8
// Address: 0x41e1a8 - 0x41e2c0
void sub_0041E1A8_0x41e1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041E1A8_0x41e1a8");
#endif

    switch (ctx->pc) {
        case 0x41e1d0u: goto label_41e1d0;
        case 0x41e1e4u: goto label_41e1e4;
        case 0x41e204u: goto label_41e204;
        case 0x41e218u: goto label_41e218;
        case 0x41e228u: goto label_41e228;
        case 0x41e238u: goto label_41e238;
        case 0x41e244u: goto label_41e244;
        case 0x41e254u: goto label_41e254;
        case 0x41e25cu: goto label_41e25c;
        case 0x41e26cu: goto label_41e26c;
        case 0x41e274u: goto label_41e274;
        case 0x41e288u: goto label_41e288;
        case 0x41e298u: goto label_41e298;
        case 0x41e2a0u: goto label_41e2a0;
        default: break;
    }

    ctx->pc = 0x41e1a8u;

    // 0x41e1a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x41e1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x41e1ac: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x41e1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x41e1b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x41e1b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e1b4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x41e1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x41e1b8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x41e1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e1bc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x41e1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x41e1c0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x41e1c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e1c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41e1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41e1c8: 0xc107034  jal         func_41C0D0
    ctx->pc = 0x41E1C8u;
    SET_GPR_U32(ctx, 31, 0x41E1D0u);
    ctx->pc = 0x41E1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41E1C8u;
    // 0x41e1cc: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C0D0u, 0x41E1C8u, 0x41E1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41E1D0u;
label_41e1d0:
    // 0x41e1d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x41e1d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e1d4: 0x12200033  beqz        $s1, . + 4 + (0x33 << 2)
    ctx->pc = 0x41E1D4u;
    {
        const bool branch_taken_0x41e1d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E1D4u;
        // 0x41e1d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e1d4) {
            ctx->pc = 0x41E2A4u;
            goto label_41e2a4;
        }
    }
    ctx->pc = 0x41E1DCu;
    // 0x41e1dc: 0xc107078  jal         func_41C1E0
    ctx->pc = 0x41E1DCu;
    SET_GPR_U32(ctx, 31, 0x41E1E4u);
    ctx->pc = 0x41E1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41E1DCu;
    // 0x41e1e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C1E0u, 0x41E1DCu, 0x41E1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41E1E4u;
label_41e1e4:
    // 0x41e1e4: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x41E1E4u;
    {
        const bool branch_taken_0x41e1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E1E4u;
        // 0x41e1e8: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e1e4) {
            ctx->pc = 0x41E298u;
            goto label_41e298;
        }
    }
    ctx->pc = 0x41E1ECu;
    // 0x41e1ec: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x41e1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x41e1f0: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x41E1F0u;
    {
        const bool branch_taken_0x41e1f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x41E1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E1F0u;
        // 0x41e1f4: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e1f0) {
            ctx->pc = 0x41E27Cu;
            goto label_41e27c;
        }
    }
    ctx->pc = 0x41E1F8u;
    // 0x41e1f8: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x41e1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x41e1fc: 0xc107034  jal         func_41C0D0
    ctx->pc = 0x41E1FCu;
    SET_GPR_U32(ctx, 31, 0x41E204u);
    ctx->pc = 0x41E200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41E1FCu;
    // 0x41e200: 0x8e450008  lw          $a1, 0x8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C0D0u, 0x41E1FCu, 0x41E204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41E204u;
label_41e204:
    // 0x41e204: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x41e204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e208: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x41E208u;
    {
        const bool branch_taken_0x41e208 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x41e208) {
            ctx->pc = 0x41E290u;
            goto label_41e290;
        }
    }
    ctx->pc = 0x41E210u;
    // 0x41e210: 0xc107078  jal         func_41C1E0
    ctx->pc = 0x41E210u;
    SET_GPR_U32(ctx, 31, 0x41E218u);
    ctx->pc = 0x41E214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41E210u;
    // 0x41e214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C1E0u, 0x41E210u, 0x41E218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41E218u;
label_41e218:
    // 0x41e218: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x41E218u;
    {
        const bool branch_taken_0x41e218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41E21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E218u;
        // 0x41e21c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e218) {
            ctx->pc = 0x41E230u;
            goto label_41e230;
        }
    }
    ctx->pc = 0x41E220u;
    // 0x41e220: 0xc10705c  jal         func_41C170
    ctx->pc = 0x41E220u;
    SET_GPR_U32(ctx, 31, 0x41E228u);
    ctx->pc = 0x41E224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41E220u;
    // 0x41e224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41E220u, 0x41E228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41E228u;
label_41e228:
    // 0x41e228: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x41E228u;
    {
        const bool branch_taken_0x41e228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x41e228) {
            ctx->pc = 0x41E290u;
            goto label_41e290;
        }
    }
    ctx->pc = 0x41E230u;
label_41e230:
    // 0x41e230: 0xc1070d0  jal         func_41C340
    ctx->pc = 0x41E230u;
    SET_GPR_U32(ctx, 31, 0x41E238u);
    ctx->pc = 0x41E234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41E230u;
    // 0x41e234: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C340u, 0x41E230u, 0x41E238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41E238u;
label_41e238:
    // 0x41e238: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41e238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e23c: 0xc107798  jal         func_41DE60
    ctx->pc = 0x41E23Cu;
    SET_GPR_U32(ctx, 31, 0x41E244u);
    ctx->pc = 0x41E240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41E23Cu;
    // 0x41e240: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41DE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41DE60u, 0x41E23Cu, 0x41E244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41E244u;
label_41e244:
    // 0x41e244: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x41E244u;
    {
        const bool branch_taken_0x41e244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41e244) {
            ctx->pc = 0x41E264u;
            goto label_41e264;
        }
    }
    ctx->pc = 0x41E24Cu;
    // 0x41e24c: 0xc1070bc  jal         func_41C2F0
    ctx->pc = 0x41E24Cu;
    SET_GPR_U32(ctx, 31, 0x41E254u);
    ctx->pc = 0x41E250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41E24Cu;
    // 0x41e250: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C2F0u, 0x41E24Cu, 0x41E254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41E254u;
label_41e254:
    // 0x41e254: 0xc10705c  jal         func_41C170
    ctx->pc = 0x41E254u;
    SET_GPR_U32(ctx, 31, 0x41E25Cu);
    ctx->pc = 0x41E258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41E254u;
    // 0x41e258: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41E254u, 0x41E25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41E25Cu;
label_41e25c:
    // 0x41e25c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x41E25Cu;
    {
        const bool branch_taken_0x41e25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x41e25c) {
            ctx->pc = 0x41E290u;
            goto label_41e290;
        }
    }
    ctx->pc = 0x41E264u;
label_41e264:
    // 0x41e264: 0xc1070bc  jal         func_41C2F0
    ctx->pc = 0x41E264u;
    SET_GPR_U32(ctx, 31, 0x41E26Cu);
    ctx->pc = 0x41E268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41E264u;
    // 0x41e268: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C2F0u, 0x41E264u, 0x41E26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41E26Cu;
label_41e26c:
    // 0x41e26c: 0xc10705c  jal         func_41C170
    ctx->pc = 0x41E26Cu;
    SET_GPR_U32(ctx, 31, 0x41E274u);
    ctx->pc = 0x41E270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41E26Cu;
    // 0x41e270: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41E26Cu, 0x41E274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41E274u;
label_41e274:
    // 0x41e274: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x41E274u;
    {
        const bool branch_taken_0x41e274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E274u;
        // 0x41e278: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e274) {
            ctx->pc = 0x41E2A4u;
            goto label_41e2a4;
        }
    }
    ctx->pc = 0x41E27Cu;
label_41e27c:
    // 0x41e27c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x41e27cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e280: 0xc107798  jal         func_41DE60
    ctx->pc = 0x41E280u;
    SET_GPR_U32(ctx, 31, 0x41E288u);
    ctx->pc = 0x41E284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41E280u;
    // 0x41e284: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41DE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41DE60u, 0x41E280u, 0x41E288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41E288u;
label_41e288:
    // 0x41e288: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x41E288u;
    {
        const bool branch_taken_0x41e288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41E28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E288u;
        // 0x41e28c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e288) {
            ctx->pc = 0x41E2A4u;
            goto label_41e2a4;
        }
    }
    ctx->pc = 0x41E290u;
label_41e290:
    // 0x41e290: 0xc1070bc  jal         func_41C2F0
    ctx->pc = 0x41E290u;
    SET_GPR_U32(ctx, 31, 0x41E298u);
    ctx->pc = 0x41E294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41E290u;
    // 0x41e294: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C2F0u, 0x41E290u, 0x41E298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41E298u;
label_41e298:
    // 0x41e298: 0xc10705c  jal         func_41C170
    ctx->pc = 0x41E298u;
    SET_GPR_U32(ctx, 31, 0x41E2A0u);
    ctx->pc = 0x41E29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41E298u;
    // 0x41e29c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41E298u, 0x41E2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41E2A0u;
label_41e2a0:
    // 0x41e2a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x41e2a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41e2a4:
    // 0x41e2a4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x41e2a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x41e2a8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x41e2a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41e2ac: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x41e2acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41e2b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41e2b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41e2b4: 0x3e00008  jr          $ra
    ctx->pc = 0x41E2B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41E2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E2B4u;
        // 0x41e2b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41E2B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41E2BCu;
    // 0x41e2bc: 0x0  nop
    ctx->pc = 0x41e2bcu;
    // NOP
    ctx->pc = 0x41e2c0u;
}
