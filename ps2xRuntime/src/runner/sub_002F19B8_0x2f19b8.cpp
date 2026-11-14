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

// Function: sub_002F19B8
// Address: 0x2f19b8 - 0x2f1a90
void sub_002F19B8_0x2f19b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F19B8_0x2f19b8");
#endif

    switch (ctx->pc) {
        case 0x2f19d8u: goto label_2f19d8;
        default: break;
    }

    ctx->pc = 0x2f19b8u;

    // 0x2f19b8: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2f19b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f19bc: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x2f19bcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f19c0: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x2f19c0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f19c4: 0x11400030  beqz        $t2, . + 4 + (0x30 << 2)
    ctx->pc = 0x2F19C4u;
    {
        const bool branch_taken_0x2f19c4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F19C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F19C4u;
        // 0x2f19c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f19c4) {
            ctx->pc = 0x2F1A88u;
            goto label_2f1a88;
        }
    }
    ctx->pc = 0x2F19CCu;
    // 0x2f19cc: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x2f19ccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f19d0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2F19D0u;
    {
        const bool branch_taken_0x2f19d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F19D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F19D0u;
        // 0x2f19d4: 0x254affff  addiu       $t2, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f19d0) {
            ctx->pc = 0x2F19FCu;
            goto label_2f19fc;
        }
    }
    ctx->pc = 0x2F19D8u;
label_2f19d8:
    // 0x2f19d8: 0x5140001d  beql        $t2, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x2F19D8u;
    {
        const bool branch_taken_0x2f19d8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f19d8) {
            ctx->pc = 0x2F19DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F19D8u;
            // 0x2f19dc: 0x91650000  lbu         $a1, 0x0($t3) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1A50u;
            goto label_2f1a50;
        }
    }
    ctx->pc = 0x2F19E0u;
    // 0x2f19e0: 0x5120001b  beql        $t1, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x2F19E0u;
    {
        const bool branch_taken_0x2f19e0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f19e0) {
            ctx->pc = 0x2F19E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F19E0u;
            // 0x2f19e4: 0x91650000  lbu         $a1, 0x0($t3) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1A50u;
            goto label_2f1a50;
        }
    }
    ctx->pc = 0x2F19E8u;
    // 0x2f19e8: 0x51000019  beql        $t0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x2F19E8u;
    {
        const bool branch_taken_0x2f19e8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f19e8) {
            ctx->pc = 0x2F19ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F19E8u;
            // 0x2f19ec: 0x91650000  lbu         $a1, 0x0($t3) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1A50u;
            goto label_2f1a50;
        }
    }
    ctx->pc = 0x2F19F0u;
    // 0x2f19f0: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x2f19f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x2f19f4: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x2f19f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x2f19f8: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x2f19f8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_2f19fc:
    // 0x2f19fc: 0x514d0014  beql        $t2, $t5, . + 4 + (0x14 << 2)
    ctx->pc = 0x2F19FCu;
    {
        const bool branch_taken_0x2f19fc = (GPR_U64(ctx, 10) == GPR_U64(ctx, 13));
        if (branch_taken_0x2f19fc) {
            ctx->pc = 0x2F1A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F19FCu;
            // 0x2f1a00: 0x91650000  lbu         $a1, 0x0($t3) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1A50u;
            goto label_2f1a50;
        }
    }
    ctx->pc = 0x2F1A04u;
    // 0x2f1a04: 0x81690000  lb          $t1, 0x0($t3)
    ctx->pc = 0x2f1a04u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2f1a08: 0x81880000  lb          $t0, 0x0($t4)
    ctx->pc = 0x2f1a08u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x2f1a0c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x2f1a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x2f1a10: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x2f1a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x2f1a14: 0x90a58f81  lbu         $a1, -0x707F($a1)
    ctx->pc = 0x2f1a14u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294938497)));
    // 0x2f1a18: 0x25270020  addiu       $a3, $t1, 0x20
    ctx->pc = 0x2f1a18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x2f1a1c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2f1a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2f1a20: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2f1a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2f1a24: 0x90638f81  lbu         $v1, -0x707F($v1)
    ctx->pc = 0x2f1a24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294938497)));
    // 0x2f1a28: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x2f1a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1a2c: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x2f1a2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2f1a30: 0x25060020  addiu       $a2, $t0, 0x20
    ctx->pc = 0x2f1a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x2f1a34: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2f1a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2f1a38: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x2f1a38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1a3c: 0xe5200b  movn        $a0, $a3, $a1
    ctx->pc = 0x2f1a3cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 7));
    // 0x2f1a40: 0xc3100b  movn        $v0, $a2, $v1
    ctx->pc = 0x2f1a40u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x2f1a44: 0x1082ffe4  beq         $a0, $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2F1A44u;
    {
        const bool branch_taken_0x2f1a44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f1a44) {
            ctx->pc = 0x2F19D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f19d8;
        }
    }
    ctx->pc = 0x2F1A4Cu;
    // 0x2f1a4c: 0x91650000  lbu         $a1, 0x0($t3)
    ctx->pc = 0x2f1a4cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
label_2f1a50:
    // 0x2f1a50: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x2f1a50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x2f1a54: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2f1a54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2f1a58: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2f1a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2f1a5c: 0x90848f81  lbu         $a0, -0x707F($a0)
    ctx->pc = 0x2f1a5cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294938497)));
    // 0x2f1a60: 0x24a70020  addiu       $a3, $a1, 0x20
    ctx->pc = 0x2f1a60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2f1a64: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2f1a64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2f1a68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2f1a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f1a6c: 0x90638f81  lbu         $v1, -0x707F($v1)
    ctx->pc = 0x2f1a6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294938497)));
    // 0x2f1a70: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x2f1a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2f1a74: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2f1a74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2f1a78: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2f1a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2f1a7c: 0xe4280b  movn        $a1, $a3, $a0
    ctx->pc = 0x2f1a7cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
    // 0x2f1a80: 0xc3100b  movn        $v0, $a2, $v1
    ctx->pc = 0x2f1a80u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x2f1a84: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x2f1a84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2f1a88:
    // 0x2f1a88: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1A90u;
}
