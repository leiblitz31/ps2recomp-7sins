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

// Function: sub_004B1F68
// Address: 0x4b1f68 - 0x4b2070
void sub_004B1F68_0x4b1f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B1F68_0x4b1f68");
#endif

    switch (ctx->pc) {
        case 0x4b1f94u: goto label_4b1f94;
        case 0x4b1fbcu: goto label_4b1fbc;
        case 0x4b1fc8u: goto label_4b1fc8;
        case 0x4b1fd0u: goto label_4b1fd0;
        case 0x4b1ff0u: goto label_4b1ff0;
        case 0x4b2008u: goto label_4b2008;
        case 0x4b2010u: goto label_4b2010;
        case 0x4b2024u: goto label_4b2024;
        case 0x4b2048u: goto label_4b2048;
        case 0x4b2050u: goto label_4b2050;
        case 0x4b2058u: goto label_4b2058;
        default: break;
    }

    ctx->pc = 0x4b1f68u;

    // 0x4b1f68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b1f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4b1f6c: 0xaf80b8e4  sw          $zero, -0x471C($gp)
    ctx->pc = 0x4b1f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949092), GPR_U32(ctx, 0));
    // 0x4b1f70: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4b1f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4b1f74: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4b1f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1f78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b1f78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1f7c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b1f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4b1f80: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x4b1f80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x4b1f84: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x4b1f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x4b1f88: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x4b1f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x4b1f8c: 0xc12c6b8  jal         func_4B1AE0
    ctx->pc = 0x4B1F8Cu;
    SET_GPR_U32(ctx, 31, 0x4B1F94u);
    ctx->pc = 0x4B1F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1F8Cu;
    // 0x4b1f90: 0xaf80b8e0  sw          $zero, -0x4720($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949088), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B1AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B1AE0u, 0x4B1F8Cu, 0x4B1F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1F94u;
label_4b1f94:
    // 0x4b1f94: 0xae001418  sw          $zero, 0x1418($s0)
    ctx->pc = 0x4b1f94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5144), GPR_U32(ctx, 0));
    // 0x4b1f98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4b1f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1f9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b1f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1fa0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4b1fa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1fa4: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x4b1fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x4b1fa8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4b1fa8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1fac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4b1facu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1fb0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4b1fb0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1fb4: 0xc12baca  jal         func_4AEB28
    ctx->pc = 0x4B1FB4u;
    SET_GPR_U32(ctx, 31, 0x4B1FBCu);
    ctx->pc = 0x4B1FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1FB4u;
    // 0x4b1fb8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AEB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AEB28u, 0x4B1FB4u, 0x4B1FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1FBCu;
label_4b1fbc:
    // 0x4b1fbc: 0x8f82b8f4  lw          $v0, -0x470C($gp)
    ctx->pc = 0x4b1fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949108)));
    // 0x4b1fc0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B1FC0u;
    {
        const bool branch_taken_0x4b1fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1FC0u;
        // 0x4b1fc4: 0x8f82c250  lw          $v0, -0x3DB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1fc0) {
            ctx->pc = 0x4B1FDCu;
            goto label_4b1fdc;
        }
    }
    ctx->pc = 0x4B1FC8u;
label_4b1fc8:
    // 0x4b1fc8: 0xc0bf778  jal         func_2FDDE0
    ctx->pc = 0x4B1FC8u;
    SET_GPR_U32(ctx, 31, 0x4B1FD0u);
    ctx->pc = 0x4B1FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1FC8u;
    // 0x4b1fcc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDDE0u, 0x4B1FC8u, 0x4B1FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1FD0u;
label_4b1fd0:
    // 0x4b1fd0: 0x8f82b8f4  lw          $v0, -0x470C($gp)
    ctx->pc = 0x4b1fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949108)));
    // 0x4b1fd4: 0x1440fffc  bnez        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x4B1FD4u;
    {
        const bool branch_taken_0x4b1fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B1FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1FD4u;
        // 0x4b1fd8: 0x8f82c250  lw          $v0, -0x3DB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1fd4) {
            ctx->pc = 0x4B1FC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b1fc8;
        }
    }
    ctx->pc = 0x4B1FDCu;
label_4b1fdc:
    // 0x4b1fdc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4b1fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4b1fe0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B1FE0u;
    {
        const bool branch_taken_0x4b1fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1FE0u;
        // 0x4b1fe4: 0x3c04001c  lui         $a0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1fe0) {
            ctx->pc = 0x4B1FF0u;
            goto label_4b1ff0;
        }
    }
    ctx->pc = 0x4B1FE8u;
    // 0x4b1fe8: 0xc12d030  jal         func_4B40C0
    ctx->pc = 0x4B1FE8u;
    SET_GPR_U32(ctx, 31, 0x4B1FF0u);
    ctx->pc = 0x4B1FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1FE8u;
    // 0x4b1fec: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B40C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B40C0u, 0x4B1FE8u, 0x4B1FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1FF0u;
label_4b1ff0:
    // 0x4b1ff0: 0x8f82c250  lw          $v0, -0x3DB0($gp)
    ctx->pc = 0x4b1ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951504)));
    // 0x4b1ff4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x4b1ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x4b1ff8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B1FF8u;
    {
        const bool branch_taken_0x4b1ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1FF8u;
        // 0x4b1ffc: 0x3c04001e  lui         $a0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)30 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1ff8) {
            ctx->pc = 0x4B2008u;
            goto label_4b2008;
        }
    }
    ctx->pc = 0x4B2000u;
    // 0x4b2000: 0xc12d030  jal         func_4B40C0
    ctx->pc = 0x4B2000u;
    SET_GPR_U32(ctx, 31, 0x4B2008u);
    ctx->pc = 0x4B2004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2000u;
    // 0x4b2004: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B40C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B40C0u, 0x4B2000u, 0x4B2008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B2008u;
label_4b2008:
    // 0x4b2008: 0xc12d052  jal         func_4B4148
    ctx->pc = 0x4B2008u;
    SET_GPR_U32(ctx, 31, 0x4B2010u);
    ctx->pc = 0x4B4148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4148u, 0x4B2008u, 0x4B2010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B2010u;
label_4b2010:
    // 0x4b2010: 0x8f82b904  lw          $v0, -0x46FC($gp)
    ctx->pc = 0x4b2010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949124)));
    // 0x4b2014: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4B2014u;
    {
        const bool branch_taken_0x4b2014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b2014) {
            ctx->pc = 0x4B2050u;
            goto label_4b2050;
        }
    }
    ctx->pc = 0x4B201Cu;
    // 0x4b201c: 0xc0bf694  jal         func_2FDA50
    ctx->pc = 0x4B201Cu;
    SET_GPR_U32(ctx, 31, 0x4B2024u);
    ctx->pc = 0x2FDA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDA50u, 0x4B201Cu, 0x4B2024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B2024u;
label_4b2024:
    // 0x4b2024: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x4b2024u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2028: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4b2028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b202c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b202cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2030: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4b2030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2034: 0x2407002c  addiu       $a3, $zero, 0x2C
    ctx->pc = 0x4b2034u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x4b2038: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4b2038u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b203c: 0x278ab904  addiu       $t2, $gp, -0x46FC
    ctx->pc = 0x4b203cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949124));
    // 0x4b2040: 0xc12baca  jal         func_4AEB28
    ctx->pc = 0x4B2040u;
    SET_GPR_U32(ctx, 31, 0x4B2048u);
    ctx->pc = 0x4B2044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2040u;
    // 0x4b2044: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AEB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AEB28u, 0x4B2040u, 0x4B2048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B2048u;
label_4b2048:
    // 0x4b2048: 0xc0bf6a0  jal         func_2FDA80
    ctx->pc = 0x4B2048u;
    SET_GPR_U32(ctx, 31, 0x4B2050u);
    ctx->pc = 0x2FDA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDA80u, 0x4B2048u, 0x4B2050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B2050u;
label_4b2050:
    // 0x4b2050: 0xc12bb8e  jal         func_4AEE38
    ctx->pc = 0x4B2050u;
    SET_GPR_U32(ctx, 31, 0x4B2058u);
    ctx->pc = 0x4AEE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AEE38u, 0x4B2050u, 0x4B2058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B2058u;
label_4b2058:
    // 0x4b2058: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4b2058u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b205c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b205cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b2060: 0xaf80b90c  sw          $zero, -0x46F4($gp)
    ctx->pc = 0x4b2060u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949132), GPR_U32(ctx, 0));
    // 0x4b2064: 0x3e00008  jr          $ra
    ctx->pc = 0x4B2064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B2068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2064u;
        // 0x4b2068: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B2064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B206Cu;
    // 0x4b206c: 0x0  nop
    ctx->pc = 0x4b206cu;
    // NOP
    ctx->pc = 0x4b2070u;
}
