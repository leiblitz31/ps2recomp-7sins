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

// Function: sub_00399B00
// Address: 0x399b00 - 0x399d10
void sub_00399B00_0x399b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399B00_0x399b00");
#endif

    switch (ctx->pc) {
        case 0x399b28u: goto label_399b28;
        case 0x399b48u: goto label_399b48;
        case 0x399b68u: goto label_399b68;
        case 0x399b88u: goto label_399b88;
        case 0x399ba8u: goto label_399ba8;
        case 0x399bc8u: goto label_399bc8;
        case 0x399be8u: goto label_399be8;
        case 0x399c08u: goto label_399c08;
        case 0x399c1cu: goto label_399c1c;
        case 0x399c2cu: goto label_399c2c;
        case 0x399c3cu: goto label_399c3c;
        case 0x399c88u: goto label_399c88;
        case 0x399ca0u: goto label_399ca0;
        case 0x399cb0u: goto label_399cb0;
        case 0x399cbcu: goto label_399cbc;
        default: break;
    }

    ctx->pc = 0x399b00u;

    // 0x399b00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x399b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x399b04: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x399b04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x399b08: 0x3c070039  lui         $a3, 0x39
    ctx->pc = 0x399b08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
    // 0x399b0c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x399b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x399b10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x399b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x399b14: 0x24c6e470  addiu       $a2, $a2, -0x1B90
    ctx->pc = 0x399b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960240));
    // 0x399b18: 0x24e7e408  addiu       $a3, $a3, -0x1BF8
    ctx->pc = 0x399b18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960136));
    // 0x399b1c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x399b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x399b20: 0xc1063f6  jal         func_418FD8
    ctx->pc = 0x399B20u;
    SET_GPR_U32(ctx, 31, 0x399B28u);
    ctx->pc = 0x399B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399B20u;
    // 0x399b24: 0x24050501  addiu       $a1, $zero, 0x501 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1281));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418FD8u, 0x399B20u, 0x399B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399B28u;
label_399b28:
    // 0x399b28: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x399b28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x399b2c: 0x3c070039  lui         $a3, 0x39
    ctx->pc = 0x399b2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
    // 0x399b30: 0x24c6f9b0  addiu       $a2, $a2, -0x650
    ctx->pc = 0x399b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965680));
    // 0x399b34: 0x24e7ff68  addiu       $a3, $a3, -0x98
    ctx->pc = 0x399b34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967144));
    // 0x399b38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x399b38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399b3c: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x399b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x399b40: 0xc1063f6  jal         func_418FD8
    ctx->pc = 0x399B40u;
    SET_GPR_U32(ctx, 31, 0x399B48u);
    ctx->pc = 0x399B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399B40u;
    // 0x399b44: 0x24050502  addiu       $a1, $zero, 0x502 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1282));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418FD8u, 0x399B40u, 0x399B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399B48u;
label_399b48:
    // 0x399b48: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x399b48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x399b4c: 0x3c070039  lui         $a3, 0x39
    ctx->pc = 0x399b4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
    // 0x399b50: 0x24c6cb78  addiu       $a2, $a2, -0x3488
    ctx->pc = 0x399b50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953848));
    // 0x399b54: 0x24e7cb60  addiu       $a3, $a3, -0x34A0
    ctx->pc = 0x399b54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953824));
    // 0x399b58: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x399b58u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x399b5c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x399b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x399b60: 0xc1063f6  jal         func_418FD8
    ctx->pc = 0x399B60u;
    SET_GPR_U32(ctx, 31, 0x399B68u);
    ctx->pc = 0x399B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399B60u;
    // 0x399b64: 0x24050503  addiu       $a1, $zero, 0x503 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418FD8u, 0x399B60u, 0x399B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399B68u;
label_399b68:
    // 0x399b68: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x399b68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x399b6c: 0x3c070039  lui         $a3, 0x39
    ctx->pc = 0x399b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
    // 0x399b70: 0x24c69548  addiu       $a2, $a2, -0x6AB8
    ctx->pc = 0x399b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939976));
    // 0x399b74: 0x24e79618  addiu       $a3, $a3, -0x69E8
    ctx->pc = 0x399b74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940184));
    // 0x399b78: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x399b78u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x399b7c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x399b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x399b80: 0xc1063f6  jal         func_418FD8
    ctx->pc = 0x399B80u;
    SET_GPR_U32(ctx, 31, 0x399B88u);
    ctx->pc = 0x399B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399B80u;
    // 0x399b84: 0x24050504  addiu       $a1, $zero, 0x504 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418FD8u, 0x399B80u, 0x399B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399B88u;
label_399b88:
    // 0x399b88: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x399b88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x399b8c: 0x3c070039  lui         $a3, 0x39
    ctx->pc = 0x399b8cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
    // 0x399b90: 0x24c6d6c8  addiu       $a2, $a2, -0x2938
    ctx->pc = 0x399b90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956744));
    // 0x399b94: 0x24e7d748  addiu       $a3, $a3, -0x28B8
    ctx->pc = 0x399b94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956872));
    // 0x399b98: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x399b98u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x399b9c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x399b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x399ba0: 0xc1063f6  jal         func_418FD8
    ctx->pc = 0x399BA0u;
    SET_GPR_U32(ctx, 31, 0x399BA8u);
    ctx->pc = 0x399BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399BA0u;
    // 0x399ba4: 0x24050505  addiu       $a1, $zero, 0x505 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1285));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418FD8u, 0x399BA0u, 0x399BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399BA8u;
label_399ba8:
    // 0x399ba8: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x399ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x399bac: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x399bacu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
    // 0x399bb0: 0x24c68de8  addiu       $a2, $a2, -0x7218
    ctx->pc = 0x399bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938088));
    // 0x399bb4: 0x24e78e00  addiu       $a3, $a3, -0x7200
    ctx->pc = 0x399bb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294938112));
    // 0x399bb8: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x399bb8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x399bbc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x399bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399bc0: 0xc1063f6  jal         func_418FD8
    ctx->pc = 0x399BC0u;
    SET_GPR_U32(ctx, 31, 0x399BC8u);
    ctx->pc = 0x399BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399BC0u;
    // 0x399bc4: 0x2405050a  addiu       $a1, $zero, 0x50A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1290));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418FD8u, 0x399BC0u, 0x399BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399BC8u;
label_399bc8:
    // 0x399bc8: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x399bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x399bcc: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x399bccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
    // 0x399bd0: 0x24c6aab8  addiu       $a2, $a2, -0x5548
    ctx->pc = 0x399bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945464));
    // 0x399bd4: 0x24e7aa48  addiu       $a3, $a3, -0x55B8
    ctx->pc = 0x399bd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945352));
    // 0x399bd8: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x399bd8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x399bdc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x399bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x399be0: 0xc1063f6  jal         func_418FD8
    ctx->pc = 0x399BE0u;
    SET_GPR_U32(ctx, 31, 0x399BE8u);
    ctx->pc = 0x399BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399BE0u;
    // 0x399be4: 0x24050507  addiu       $a1, $zero, 0x507 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1287));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418FD8u, 0x399BE0u, 0x399BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399BE8u;
label_399be8:
    // 0x399be8: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x399be8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x399bec: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x399becu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x399bf0: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x399bf0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x399bf4: 0x24c673d0  addiu       $a2, $a2, 0x73D0
    ctx->pc = 0x399bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29648));
    // 0x399bf8: 0x24e773e8  addiu       $a3, $a3, 0x73E8
    ctx->pc = 0x399bf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 29672));
    // 0x399bfc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x399bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399c00: 0xc1063f6  jal         func_418FD8
    ctx->pc = 0x399C00u;
    SET_GPR_U32(ctx, 31, 0x399C08u);
    ctx->pc = 0x399C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399C00u;
    // 0x399c04: 0x2405050b  addiu       $a1, $zero, 0x50B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418FD8u, 0x399C00u, 0x399C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399C08u;
label_399c08:
    // 0x399c08: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x399c08u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x399c0c: 0x600000c  bltz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x399C0Cu;
    {
        const bool branch_taken_0x399c0c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x399C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399C0Cu;
        // 0x399c10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399c0c) {
            ctx->pc = 0x399C40u;
            goto label_399c40;
        }
    }
    ctx->pc = 0x399C14u;
    // 0x399c14: 0xc0e6d12  jal         func_39B448
    ctx->pc = 0x399C14u;
    SET_GPR_U32(ctx, 31, 0x399C1Cu);
    ctx->pc = 0x39B448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B448u, 0x399C14u, 0x399C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399C1Cu;
label_399c1c:
    // 0x399c1c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x399C1Cu;
    {
        const bool branch_taken_0x399c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x399C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399C1Cu;
        // 0x399c20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399c1c) {
            ctx->pc = 0x399C40u;
            goto label_399c40;
        }
    }
    ctx->pc = 0x399C24u;
    // 0x399c24: 0xc0e25f0  jal         func_3897C0
    ctx->pc = 0x399C24u;
    SET_GPR_U32(ctx, 31, 0x399C2Cu);
    ctx->pc = 0x3897C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3897C0u, 0x399C24u, 0x399C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399C2Cu;
label_399c2c:
    // 0x399c2c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x399C2Cu;
    {
        const bool branch_taken_0x399c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x399c2c) {
            ctx->pc = 0x399C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x399C2Cu;
            // 0x399c30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x399C40u;
            goto label_399c40;
        }
    }
    ctx->pc = 0x399C34u;
    // 0x399c34: 0xc0e9ab8  jal         func_3A6AE0
    ctx->pc = 0x399C34u;
    SET_GPR_U32(ctx, 31, 0x399C3Cu);
    ctx->pc = 0x3A6AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6AE0u, 0x399C34u, 0x399C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399C3Cu;
label_399c3c:
    // 0x399c3c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x399c3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_399c40:
    // 0x399c40: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x399c40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x399c44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x399c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x399c48: 0x3e00008  jr          $ra
    ctx->pc = 0x399C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399C48u;
        // 0x399c4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x399C50u;
    // 0x399c50: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x399c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x399c54: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x399c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
    // 0x399c58: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x399c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
    // 0x399c5c: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x399c5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399c60: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x399c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
    // 0x399c64: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x399c64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399c68: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x399c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
    // 0x399c6c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x399c6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399c70: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x399c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x399c74: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x399c74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399c78: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x399c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
    // 0x399c7c: 0x8c90001c  lw          $s0, 0x1C($a0)
    ctx->pc = 0x399c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x399c80: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x399c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x399c84: 0x0  nop
    ctx->pc = 0x399c84u;
    // NOP
label_399c88:
    // 0x399c88: 0x4410010  bgez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x399C88u;
    {
        const bool branch_taken_0x399c88 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x399C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399C88u;
        // 0x399c8c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399c88) {
            ctx->pc = 0x399CCCu;
            goto label_399ccc;
        }
    }
    ctx->pc = 0x399C90u;
    // 0x399c90: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x399C90u;
    {
        const bool branch_taken_0x399c90 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x399C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399C90u;
        // 0x399c94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399c90) {
            ctx->pc = 0x399CA8u;
            goto label_399ca8;
        }
    }
    ctx->pc = 0x399C98u;
    // 0x399c98: 0xc10540a  jal         func_415028
    ctx->pc = 0x399C98u;
    SET_GPR_U32(ctx, 31, 0x399CA0u);
    ctx->pc = 0x399C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399C98u;
    // 0x399c9c: 0x2605006c  addiu       $a1, $s0, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415028u, 0x399C98u, 0x399CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399CA0u;
label_399ca0:
    // 0x399ca0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x399CA0u;
    {
        const bool branch_taken_0x399ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x399CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399CA0u;
        // 0x399ca4: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399ca0) {
            ctx->pc = 0x399CB0u;
            goto label_399cb0;
        }
    }
    ctx->pc = 0x399CA8u;
label_399ca8:
    // 0x399ca8: 0xc105418  jal         func_415060
    ctx->pc = 0x399CA8u;
    SET_GPR_U32(ctx, 31, 0x399CB0u);
    ctx->pc = 0x399CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399CA8u;
    // 0x399cac: 0x2605006c  addiu       $a1, $s0, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415060u, 0x399CA8u, 0x399CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399CB0u;
label_399cb0:
    // 0x399cb0: 0x26050060  addiu       $a1, $s0, 0x60
    ctx->pc = 0x399cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x399cb4: 0xc105418  jal         func_415060
    ctx->pc = 0x399CB4u;
    SET_GPR_U32(ctx, 31, 0x399CBCu);
    ctx->pc = 0x399CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399CB4u;
    // 0x399cb8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415060u, 0x399CB4u, 0x399CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399CBCu;
label_399cbc:
    // 0x399cbc: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x399cbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x399cc0: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x399cc0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x399cc4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x399CC4u;
    {
        const bool branch_taken_0x399cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x399CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399CC4u;
        // 0x399cc8: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399cc4) {
            ctx->pc = 0x399CE0u;
            goto label_399ce0;
        }
    }
    ctx->pc = 0x399CCCu;
label_399ccc:
    // 0x399ccc: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x399cccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x399cd0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x399cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x399cd4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x399cd4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x399cd8: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x399cd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x399cdc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x399cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_399ce0:
    // 0x399ce0: 0x643ffe9  bgezl       $s2, . + 4 + (-0x17 << 2)
    ctx->pc = 0x399CE0u;
    {
        const bool branch_taken_0x399ce0 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x399ce0) {
            ctx->pc = 0x399CE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x399CE0u;
            // 0x399ce4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x399C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_399c88;
        }
    }
    ctx->pc = 0x399CE8u;
    // 0x399ce8: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x399ce8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x399cec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x399cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x399cf0: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x399cf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x399cf4: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x399cf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x399cf8: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x399cf8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x399cfc: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x399cfcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x399d00: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x399d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x399d04: 0x3e00008  jr          $ra
    ctx->pc = 0x399D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399D04u;
        // 0x399d08: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x399D0Cu;
    // 0x399d0c: 0x0  nop
    ctx->pc = 0x399d0cu;
    // NOP
    ctx->pc = 0x399d10u;
}
