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

// Function: sub_003AEAB8
// Address: 0x3aeab8 - 0x3aed00
void sub_003AEAB8_0x3aeab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AEAB8_0x3aeab8");
#endif

    switch (ctx->pc) {
        case 0x3aeaf4u: goto label_3aeaf4;
        case 0x3aeb00u: goto label_3aeb00;
        case 0x3aeb28u: goto label_3aeb28;
        case 0x3aeb44u: goto label_3aeb44;
        case 0x3aeb60u: goto label_3aeb60;
        case 0x3aeb6cu: goto label_3aeb6c;
        case 0x3aeb90u: goto label_3aeb90;
        case 0x3aeba4u: goto label_3aeba4;
        case 0x3aebc4u: goto label_3aebc4;
        case 0x3aebf8u: goto label_3aebf8;
        case 0x3aec00u: goto label_3aec00;
        case 0x3aec18u: goto label_3aec18;
        case 0x3aec38u: goto label_3aec38;
        case 0x3aec4cu: goto label_3aec4c;
        case 0x3aec58u: goto label_3aec58;
        case 0x3aec78u: goto label_3aec78;
        case 0x3aec8cu: goto label_3aec8c;
        case 0x3aecacu: goto label_3aecac;
        default: break;
    }

    ctx->pc = 0x3aeab8u;

    // 0x3aeab8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3aeab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3aeabc: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3aeabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x3aeac0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3aeac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x3aeac4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3aeac4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aeac8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3aeac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x3aeacc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3aeaccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aead0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3aead0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x3aead4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3aead4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3aead8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x3aead8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x3aeadc: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x3aeadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x3aeae0: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x3aeae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x3aeae4: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x3aeae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x3aeae8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3aeae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3aeaec: 0xc0ec620  jal         func_3B1880
    ctx->pc = 0x3AEAECu;
    SET_GPR_U32(ctx, 31, 0x3AEAF4u);
    ctx->pc = 0x3AEAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEAECu;
    // 0x3aeaf0: 0x8e640014  lw          $a0, 0x14($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1880u, 0x3AEAECu, 0x3AEAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEAF4u;
label_3aeaf4:
    // 0x3aeaf4: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x3aeaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
    // 0x3aeaf8: 0xc1036d0  jal         func_40DB40
    ctx->pc = 0x3AEAF8u;
    SET_GPR_U32(ctx, 31, 0x3AEB00u);
    ctx->pc = 0x3AEAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEAF8u;
    // 0x3aeafc: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB40u, 0x3AEAF8u, 0x3AEB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEB00u;
label_3aeb00:
    // 0x3aeb00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3aeb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3aeb04: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x3aeb04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x3aeb08: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x3aeb08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x3aeb0c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3aeb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3aeb10: 0xae730018  sw          $s3, 0x18($s3)
    ctx->pc = 0x3aeb10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 19));
    // 0x3aeb14: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3aeb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3aeb18: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AEB18u;
    {
        const bool branch_taken_0x3aeb18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3aeb18) {
            ctx->pc = 0x3AEB1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEB18u;
            // 0x3aeb1c: 0x8e140000  lw          $s4, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AEB2Cu;
            goto label_3aeb2c;
        }
    }
    ctx->pc = 0x3AEB20u;
    // 0x3aeb20: 0xc1036d2  jal         func_40DB48
    ctx->pc = 0x3AEB20u;
    SET_GPR_U32(ctx, 31, 0x3AEB28u);
    ctx->pc = 0x3AEB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEB20u;
    // 0x3aeb24: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3AEB20u, 0x3AEB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEB28u;
label_3aeb28:
    // 0x3aeb28: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3aeb28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3aeb2c:
    // 0x3aeb2c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x3aeb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3aeb30: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3aeb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3aeb34: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AEB34u;
    {
        const bool branch_taken_0x3aeb34 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x3AEB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEB34u;
        // 0x3aeb38: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aeb34) {
            ctx->pc = 0x3AEB48u;
            goto label_3aeb48;
        }
    }
    ctx->pc = 0x3AEB3Cu;
    // 0x3aeb3c: 0xc10376a  jal         func_40DDA8
    ctx->pc = 0x3AEB3Cu;
    SET_GPR_U32(ctx, 31, 0x3AEB44u);
    ctx->pc = 0x3AEB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEB3Cu;
    // 0x3aeb40: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3AEB3Cu, 0x3AEB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEB44u;
label_3aeb44:
    // 0x3aeb44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3aeb44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3aeb48:
    // 0x3aeb48: 0x8e720004  lw          $s2, 0x4($s3)
    ctx->pc = 0x3aeb48u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3aeb4c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3aeb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3aeb50: 0x56420016  bnel        $s2, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3AEB50u;
    {
        const bool branch_taken_0x3aeb50 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x3aeb50) {
            ctx->pc = 0x3AEB54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEB50u;
            // 0x3aeb54: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AEBACu;
            goto label_3aebac;
        }
    }
    ctx->pc = 0x3AEB58u;
    // 0x3aeb58: 0xc0ec620  jal         func_3B1880
    ctx->pc = 0x3AEB58u;
    SET_GPR_U32(ctx, 31, 0x3AEB60u);
    ctx->pc = 0x3AEB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEB58u;
    // 0x3aeb5c: 0x8e640014  lw          $a0, 0x14($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1880u, 0x3AEB58u, 0x3AEB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEB60u;
label_3aeb60:
    // 0x3aeb60: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x3aeb60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3aeb64: 0xc1036d0  jal         func_40DB40
    ctx->pc = 0x3AEB64u;
    SET_GPR_U32(ctx, 31, 0x3AEB6Cu);
    ctx->pc = 0x3AEB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEB64u;
    // 0x3aeb68: 0xae600014  sw          $zero, 0x14($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB40u, 0x3AEB64u, 0x3AEB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEB6Cu;
label_3aeb6c:
    // 0x3aeb6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3aeb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3aeb70: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x3aeb70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x3aeb74: 0xae730018  sw          $s3, 0x18($s3)
    ctx->pc = 0x3aeb74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 19));
    // 0x3aeb78: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x3aeb78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x3aeb7c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x3aeb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3aeb80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3aeb80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aeb84: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x3aeb84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x3aeb88: 0xc103722  jal         func_40DC88
    ctx->pc = 0x3AEB88u;
    SET_GPR_U32(ctx, 31, 0x3AEB90u);
    ctx->pc = 0x3AEB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEB88u;
    // 0x3aeb8c: 0x34c60190  ori         $a2, $a2, 0x190 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)400);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DC88u, 0x3AEB88u, 0x3AEB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEB90u;
label_3aeb90:
    // 0x3aeb90: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x3aeb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3aeb94: 0x54720005  bnel        $v1, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AEB94u;
    {
        const bool branch_taken_0x3aeb94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x3aeb94) {
            ctx->pc = 0x3AEB98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEB94u;
            // 0x3aeb98: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AEBACu;
            goto label_3aebac;
        }
    }
    ctx->pc = 0x3AEB9Cu;
    // 0x3aeb9c: 0xc1036d2  jal         func_40DB48
    ctx->pc = 0x3AEB9Cu;
    SET_GPR_U32(ctx, 31, 0x3AEBA4u);
    ctx->pc = 0x3AEBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEB9Cu;
    // 0x3aeba0: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3AEB9Cu, 0x3AEBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEBA4u;
label_3aeba4:
    // 0x3aeba4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3AEBA4u;
    {
        const bool branch_taken_0x3aeba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AEBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEBA4u;
        // 0x3aeba8: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aeba4) {
            ctx->pc = 0x3AEBB0u;
            goto label_3aebb0;
        }
    }
    ctx->pc = 0x3AEBACu;
label_3aebac:
    // 0x3aebac: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x3aebacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_3aebb0:
    // 0x3aebb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3aebb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aebb4: 0x2260018  mult        $zero, $s1, $a2
    ctx->pc = 0x3aebb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3aebb8: 0x3012  mflo        $a2
    ctx->pc = 0x3aebb8u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x3aebbc: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3AEBBCu;
    SET_GPR_U32(ctx, 31, 0x3AEBC4u);
    ctx->pc = 0x3AEBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEBBCu;
    // 0x3aebc0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3AEBBCu, 0x3AEBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEBC4u;
label_3aebc4:
    // 0x3aebc4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3aebc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3aebc8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AEBC8u;
    {
        const bool branch_taken_0x3aebc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AEBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEBC8u;
        // 0x3aebcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aebc8) {
            ctx->pc = 0x3AEBD8u;
            goto label_3aebd8;
        }
    }
    ctx->pc = 0x3AEBD0u;
    // 0x3aebd0: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x3aebd0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x3aebd4: 0x0  nop
    ctx->pc = 0x3aebd4u;
    // NOP
label_3aebd8:
    // 0x3aebd8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3aebd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3aebdc: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x3aebdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aebe0: 0x8e110014  lw          $s1, 0x14($s0)
    ctx->pc = 0x3aebe0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3aebe4: 0x12200039  beqz        $s1, . + 4 + (0x39 << 2)
    ctx->pc = 0x3AEBE4u;
    {
        const bool branch_taken_0x3aebe4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AEBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEBE4u;
        // 0x3aebe8: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aebe4) {
            ctx->pc = 0x3AECCCu;
            goto label_3aeccc;
        }
    }
    ctx->pc = 0x3AEBECu;
    // 0x3aebec: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x3aebecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3aebf0: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x3aebf0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3aebf4: 0x241e0018  addiu       $fp, $zero, 0x18
    ctx->pc = 0x3aebf4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_3aebf8:
    // 0x3aebf8: 0xc0ec604  jal         func_3B1810
    ctx->pc = 0x3AEBF8u;
    SET_GPR_U32(ctx, 31, 0x3AEC00u);
    ctx->pc = 0x3B1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1810u, 0x3AEBF8u, 0x3AEC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEC00u;
label_3aec00:
    // 0x3aec00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3aec00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aec04: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3aec04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3aec08: 0x14560005  bne         $v0, $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AEC08u;
    {
        const bool branch_taken_0x3aec08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x3AEC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEC08u;
        // 0x3aec0c: 0xae500014  sw          $s0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aec08) {
            ctx->pc = 0x3AEC20u;
            goto label_3aec20;
        }
    }
    ctx->pc = 0x3AEC10u;
    // 0x3aec10: 0xc1036d2  jal         func_40DB48
    ctx->pc = 0x3AEC10u;
    SET_GPR_U32(ctx, 31, 0x3AEC18u);
    ctx->pc = 0x3AEC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEC10u;
    // 0x3aec14: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3AEC10u, 0x3AEC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEC18u;
label_3aec18:
    // 0x3aec18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3AEC18u;
    {
        const bool branch_taken_0x3aec18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AEC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEC18u;
        // 0x3aec1c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aec18) {
            ctx->pc = 0x3AEC24u;
            goto label_3aec24;
        }
    }
    ctx->pc = 0x3AEC20u;
label_3aec20:
    // 0x3aec20: 0x8e350000  lw          $s5, 0x0($s1)
    ctx->pc = 0x3aec20u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3aec24:
    // 0x3aec24: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3aec24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3aec28: 0x54560004  bnel        $v0, $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AEC28u;
    {
        const bool branch_taken_0x3aec28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x3aec28) {
            ctx->pc = 0x3AEC2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEC28u;
            // 0x3aec2c: 0x8e140004  lw          $s4, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AEC3Cu;
            goto label_3aec3c;
        }
    }
    ctx->pc = 0x3AEC30u;
    // 0x3aec30: 0xc10376a  jal         func_40DDA8
    ctx->pc = 0x3AEC30u;
    SET_GPR_U32(ctx, 31, 0x3AEC38u);
    ctx->pc = 0x3AEC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEC30u;
    // 0x3aec34: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3AEC30u, 0x3AEC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEC38u;
label_3aec38:
    // 0x3aec38: 0x8e140004  lw          $s4, 0x4($s0)
    ctx->pc = 0x3aec38u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3aec3c:
    // 0x3aec3c: 0x16960015  bne         $s4, $s6, . + 4 + (0x15 << 2)
    ctx->pc = 0x3AEC3Cu;
    {
        const bool branch_taken_0x3aec3c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 22));
        ctx->pc = 0x3AEC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEC3Cu;
        // 0x3aec40: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aec3c) {
            ctx->pc = 0x3AEC94u;
            goto label_3aec94;
        }
    }
    ctx->pc = 0x3AEC44u;
    // 0x3aec44: 0xc0ec620  jal         func_3B1880
    ctx->pc = 0x3AEC44u;
    SET_GPR_U32(ctx, 31, 0x3AEC4Cu);
    ctx->pc = 0x3AEC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEC44u;
    // 0x3aec48: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1880u, 0x3AEC44u, 0x3AEC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEC4Cu;
label_3aec4c:
    // 0x3aec4c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3aec4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3aec50: 0xc1036d0  jal         func_40DB40
    ctx->pc = 0x3AEC50u;
    SET_GPR_U32(ctx, 31, 0x3AEC58u);
    ctx->pc = 0x3AEC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEC50u;
    // 0x3aec54: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB40u, 0x3AEC50u, 0x3AEC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEC58u;
label_3aec58:
    // 0x3aec58: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3aec58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x3aec5c: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x3aec5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x3aec60: 0xae17000c  sw          $s7, 0xC($s0)
    ctx->pc = 0x3aec60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 23));
    // 0x3aec64: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3aec64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aec68: 0xae100018  sw          $s0, 0x18($s0)
    ctx->pc = 0x3aec68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 16));
    // 0x3aec6c: 0x34c60190  ori         $a2, $a2, 0x190
    ctx->pc = 0x3aec6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)400);
    // 0x3aec70: 0xc103722  jal         func_40DC88
    ctx->pc = 0x3AEC70u;
    SET_GPR_U32(ctx, 31, 0x3AEC78u);
    ctx->pc = 0x3AEC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEC70u;
    // 0x3aec74: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DC88u, 0x3AEC70u, 0x3AEC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEC78u;
label_3aec78:
    // 0x3aec78: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3aec78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3aec7c: 0x54740006  bnel        $v1, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x3AEC7Cu;
    {
        const bool branch_taken_0x3aec7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x3aec7c) {
            ctx->pc = 0x3AEC80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEC7Cu;
            // 0x3aec80: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AEC98u;
            goto label_3aec98;
        }
    }
    ctx->pc = 0x3AEC84u;
    // 0x3aec84: 0xc1036d2  jal         func_40DB48
    ctx->pc = 0x3AEC84u;
    SET_GPR_U32(ctx, 31, 0x3AEC8Cu);
    ctx->pc = 0x3AEC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEC84u;
    // 0x3aec88: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3AEC84u, 0x3AEC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEC8Cu;
label_3aec8c:
    // 0x3aec8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3AEC8Cu;
    {
        const bool branch_taken_0x3aec8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AEC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEC8Cu;
        // 0x3aec90: 0x25e0018  mult        $zero, $s2, $fp (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aec8c) {
            ctx->pc = 0x3AEC9Cu;
            goto label_3aec9c;
        }
    }
    ctx->pc = 0x3AEC94u;
label_3aec94:
    // 0x3aec94: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3aec94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3aec98:
    // 0x3aec98: 0x25e0018  mult        $zero, $s2, $fp
    ctx->pc = 0x3aec98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3aec9c:
    // 0x3aec9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3aec9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aeca0: 0x3012  mflo        $a2
    ctx->pc = 0x3aeca0u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x3aeca4: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3AECA4u;
    SET_GPR_U32(ctx, 31, 0x3AECACu);
    ctx->pc = 0x3AECA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AECA4u;
    // 0x3aeca8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3AECA4u, 0x3AECACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AECACu;
label_3aecac:
    // 0x3aecac: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3aecacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3aecb0: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3AECB0u;
    {
        const bool branch_taken_0x3aecb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aecb0) {
            ctx->pc = 0x3AECB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AECB0u;
            // 0x3aecb4: 0xae170008  sw          $s7, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 23));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AECB8u;
            goto label_3aecb8;
        }
    }
    ctx->pc = 0x3AECB8u;
label_3aecb8:
    // 0x3aecb8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x3aecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3aecbc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x3aecbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aecc0: 0x8e310014  lw          $s1, 0x14($s1)
    ctx->pc = 0x3aecc0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x3aecc4: 0x1620ffcc  bnez        $s1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x3AECC4u;
    {
        const bool branch_taken_0x3aecc4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AECC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AECC4u;
        // 0x3aecc8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aecc4) {
            ctx->pc = 0x3AEBF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aebf8;
        }
    }
    ctx->pc = 0x3AECCCu;
label_3aeccc:
    // 0x3aeccc: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3aecccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aecd0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3aecd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3aecd4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3aecd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3aecd8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3aecd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3aecdc: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3aecdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3aece0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3aece0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3aece4: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3aece4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3aece8: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x3aece8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3aecec: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x3aececu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3aecf0: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x3aecf0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3aecf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3aecf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aecf8: 0x3e00008  jr          $ra
    ctx->pc = 0x3AECF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AECFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AECF8u;
        // 0x3aecfc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AECF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AED00u;
}
