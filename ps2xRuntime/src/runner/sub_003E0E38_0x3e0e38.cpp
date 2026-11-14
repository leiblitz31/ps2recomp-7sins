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

// Function: sub_003E0E38
// Address: 0x3e0e38 - 0x3e1360
void sub_003E0E38_0x3e0e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E0E38_0x3e0e38");
#endif

    switch (ctx->pc) {
        case 0x3e0eb8u: goto label_3e0eb8;
        case 0x3e0ed8u: goto label_3e0ed8;
        case 0x3e0ee8u: goto label_3e0ee8;
        case 0x3e0f08u: goto label_3e0f08;
        case 0x3e0f30u: goto label_3e0f30;
        case 0x3e0f84u: goto label_3e0f84;
        case 0x3e0f90u: goto label_3e0f90;
        case 0x3e0fb0u: goto label_3e0fb0;
        case 0x3e0fc8u: goto label_3e0fc8;
        case 0x3e0ff0u: goto label_3e0ff0;
        case 0x3e1024u: goto label_3e1024;
        case 0x3e1030u: goto label_3e1030;
        case 0x3e1088u: goto label_3e1088;
        case 0x3e109cu: goto label_3e109c;
        case 0x3e10c8u: goto label_3e10c8;
        case 0x3e10d8u: goto label_3e10d8;
        case 0x3e10f8u: goto label_3e10f8;
        case 0x3e1150u: goto label_3e1150;
        case 0x3e1178u: goto label_3e1178;
        case 0x3e1188u: goto label_3e1188;
        case 0x3e11a8u: goto label_3e11a8;
        case 0x3e11d0u: goto label_3e11d0;
        case 0x3e1204u: goto label_3e1204;
        case 0x3e1250u: goto label_3e1250;
        case 0x3e1268u: goto label_3e1268;
        case 0x3e1290u: goto label_3e1290;
        case 0x3e1334u: goto label_3e1334;
        default: break;
    }

    ctx->pc = 0x3e0e38u;

label_3e0e38:
    // 0x3e0e38: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3e0e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3e0e3c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3e0e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x3e0e40: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3e0e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3e0e44: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e0e44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0e48: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3e0e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x3e0e4c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3e0e4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0e50: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x3e0e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x3e0e54: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3e0e54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0e58: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3e0e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3e0e5c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x3e0e5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0e60: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3e0e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3e0e64: 0x1260011d  beqz        $s3, . + 4 + (0x11D << 2)
    ctx->pc = 0x3E0E64u;
    {
        const bool branch_taken_0x3e0e64 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0E64u;
        // 0x3e0e68: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0e64) {
            ctx->pc = 0x3E12DCu;
            goto label_3e12dc;
        }
    }
    ctx->pc = 0x3E0E6Cu;
    // 0x3e0e6c: 0x1220011c  beqz        $s1, . + 4 + (0x11C << 2)
    ctx->pc = 0x3E0E6Cu;
    {
        const bool branch_taken_0x3e0e6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0E6Cu;
        // 0x3e0e70: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0e6c) {
            ctx->pc = 0x3E12E0u;
            goto label_3e12e0;
        }
    }
    ctx->pc = 0x3E0E74u;
    // 0x3e0e74: 0xde2200f0  ld          $v0, 0xF0($s1)
    ctx->pc = 0x3e0e74u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x3e0e78: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x3e0e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x3e0e7c: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x3e0e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x3e0e80: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x3E0E80u;
    {
        const bool branch_taken_0x3e0e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0E80u;
        // 0x3e0e84: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0e80) {
            ctx->pc = 0x3E0F10u;
            goto label_3e0f10;
        }
    }
    ctx->pc = 0x3E0E88u;
    // 0x3e0e88: 0x52a2000f  beql        $s5, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3E0E88u;
    {
        const bool branch_taken_0x3e0e88 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x3e0e88) {
            ctx->pc = 0x3E0E8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E0E88u;
            // 0x3e0e8c: 0x8e220040  lw          $v0, 0x40($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E0EC8u;
            goto label_3e0ec8;
        }
    }
    ctx->pc = 0x3E0E90u;
    // 0x3e0e90: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x3e0e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x3e0e94: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x3E0E94u;
    {
        const bool branch_taken_0x3e0e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0e94) {
            ctx->pc = 0x3E0E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E0E94u;
            // 0x3e0e98: 0xde2200f0  ld          $v0, 0xF0($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E0F14u;
            goto label_3e0f14;
        }
    }
    ctx->pc = 0x3E0E9Cu;
    // 0x3e0e9c: 0x158100  sll         $s0, $s5, 4
    ctx->pc = 0x3e0e9cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x3e0ea0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3e0ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3e0ea4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x3e0ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3e0ea8: 0x50a0001a  beql        $a1, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x3E0EA8u;
    {
        const bool branch_taken_0x3e0ea8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0ea8) {
            ctx->pc = 0x3E0EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E0EA8u;
            // 0x3e0eac: 0xde2200f0  ld          $v0, 0xF0($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E0F14u;
            goto label_3e0f14;
        }
    }
    ctx->pc = 0x3E0EB0u;
    // 0x3e0eb0: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E0EB0u;
    SET_GPR_U32(ctx, 31, 0x3E0EB8u);
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E0EB0u, 0x3E0EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0EB8u;
label_3e0eb8:
    // 0x3e0eb8: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x3e0eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x3e0ebc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3e0ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3e0ec0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3E0EC0u;
    {
        const bool branch_taken_0x3e0ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0EC0u;
        // 0x3e0ec4: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0ec0) {
            ctx->pc = 0x3E0F10u;
            goto label_3e0f10;
        }
    }
    ctx->pc = 0x3E0EC8u;
label_3e0ec8:
    // 0x3e0ec8: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3E0EC8u;
    {
        const bool branch_taken_0x3e0ec8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3E0ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0EC8u;
        // 0x3e0ecc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0ec8) {
            ctx->pc = 0x3E0EFCu;
            goto label_3e0efc;
        }
    }
    ctx->pc = 0x3E0ED0u;
    // 0x3e0ed0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3e0ed0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0ed4: 0x0  nop
    ctx->pc = 0x3e0ed4u;
    // NOP
label_3e0ed8:
    // 0x3e0ed8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e0ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0edc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e0edcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0ee0: 0xc0f838e  jal         func_3E0E38
    ctx->pc = 0x3E0EE0u;
    SET_GPR_U32(ctx, 31, 0x3E0EE8u);
    ctx->pc = 0x3E0EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0EE0u;
    // 0x3e0ee4: 0x24064000  addiu       $a2, $zero, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0E38u;
    goto label_3e0e38;
    ctx->pc = 0x3E0EE8u;
label_3e0ee8:
    // 0x3e0ee8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3e0ee8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3e0eec: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x3e0eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x3e0ef0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3e0ef0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3e0ef4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3E0EF4u;
    {
        const bool branch_taken_0x3e0ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0EF4u;
        // 0x3e0ef8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0ef4) {
            ctx->pc = 0x3E0ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e0ed8;
        }
    }
    ctx->pc = 0x3E0EFCu;
label_3e0efc:
    // 0x3e0efc: 0x8e250048  lw          $a1, 0x48($s1)
    ctx->pc = 0x3e0efcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x3e0f00: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E0F00u;
    SET_GPR_U32(ctx, 31, 0x3E0F08u);
    ctx->pc = 0x3E0F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0F00u;
    // 0x3e0f04: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E0F00u, 0x3E0F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0F08u;
label_3e0f08:
    // 0x3e0f08: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x3e0f08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
    // 0x3e0f0c: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x3e0f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
label_3e0f10:
    // 0x3e0f10: 0xde2200f0  ld          $v0, 0xF0($s1)
    ctx->pc = 0x3e0f10u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 240)));
label_3e0f14:
    // 0x3e0f14: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x3e0f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x3e0f18: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x3e0f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x3e0f1c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3E0F1Cu;
    {
        const bool branch_taken_0x3e0f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0f1c) {
            ctx->pc = 0x3E0F20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E0F1Cu;
            // 0x3e0f20: 0xde2200f0  ld          $v0, 0xF0($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E0F48u;
            goto label_3e0f48;
        }
    }
    ctx->pc = 0x3E0F24u;
    // 0x3e0f24: 0x8e25005c  lw          $a1, 0x5C($s1)
    ctx->pc = 0x3e0f24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x3e0f28: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E0F28u;
    SET_GPR_U32(ctx, 31, 0x3E0F30u);
    ctx->pc = 0x3E0F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0F28u;
    // 0x3e0f2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E0F28u, 0x3E0F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0F30u;
label_3e0f30:
    // 0x3e0f30: 0xde220010  ld          $v0, 0x10($s1)
    ctx->pc = 0x3e0f30u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3e0f34: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x3e0f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x3e0f38: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x3e0f38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
    // 0x3e0f3c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3e0f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3e0f40: 0xfe220010  sd          $v0, 0x10($s1)
    ctx->pc = 0x3e0f40u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 2));
    // 0x3e0f44: 0xde2200f0  ld          $v0, 0xF0($s1)
    ctx->pc = 0x3e0f44u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 240)));
label_3e0f48:
    // 0x3e0f48: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x3e0f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x3e0f4c: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x3e0f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x3e0f50: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E0F50u;
    {
        const bool branch_taken_0x3e0f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0F50u;
        // 0x3e0f54: 0x2403bfff  addiu       $v1, $zero, -0x4001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0f50) {
            ctx->pc = 0x3E0F64u;
            goto label_3e0f64;
        }
    }
    ctx->pc = 0x3E0F58u;
    // 0x3e0f58: 0xde220010  ld          $v0, 0x10($s1)
    ctx->pc = 0x3e0f58u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3e0f5c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3e0f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3e0f60: 0xfe220010  sd          $v0, 0x10($s1)
    ctx->pc = 0x3e0f60u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 2));
label_3e0f64:
    // 0x3e0f64: 0xde2200f0  ld          $v0, 0xF0($s1)
    ctx->pc = 0x3e0f64u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x3e0f68: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x3e0f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x3e0f6c: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x3e0f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x3e0f70: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x3E0F70u;
    {
        const bool branch_taken_0x3e0f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0f70) {
            ctx->pc = 0x3E0F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E0F70u;
            // 0x3e0f74: 0xde2200f0  ld          $v0, 0xF0($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E1008u;
            goto label_3e1008;
        }
    }
    ctx->pc = 0x3E0F78u;
    // 0x3e0f78: 0x8e2500c8  lw          $a1, 0xC8($s1)
    ctx->pc = 0x3e0f78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x3e0f7c: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E0F7Cu;
    SET_GPR_U32(ctx, 31, 0x3E0F84u);
    ctx->pc = 0x3E0F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0F7Cu;
    // 0x3e0f80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E0F7Cu, 0x3E0F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0F84u;
label_3e0f84:
    // 0x3e0f84: 0x8e2500e0  lw          $a1, 0xE0($s1)
    ctx->pc = 0x3e0f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x3e0f88: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E0F88u;
    SET_GPR_U32(ctx, 31, 0x3E0F90u);
    ctx->pc = 0x3E0F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0F88u;
    // 0x3e0f8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E0F88u, 0x3E0F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0F90u;
label_3e0f90:
    // 0x3e0f90: 0x8e2200e4  lw          $v0, 0xE4($s1)
    ctx->pc = 0x3e0f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
    // 0x3e0f94: 0xae2000c8  sw          $zero, 0xC8($s1)
    ctx->pc = 0x3e0f94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 0));
    // 0x3e0f98: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3E0F98u;
    {
        const bool branch_taken_0x3e0f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0F98u;
        // 0x3e0f9c: 0xae2000e0  sw          $zero, 0xE0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0f98) {
            ctx->pc = 0x3E0FF4u;
            goto label_3e0ff4;
        }
    }
    ctx->pc = 0x3E0FA0u;
    // 0x3e0fa0: 0x922200e9  lbu         $v0, 0xE9($s1)
    ctx->pc = 0x3e0fa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 233)));
    // 0x3e0fa4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3E0FA4u;
    {
        const bool branch_taken_0x3e0fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0FA4u;
        // 0x3e0fa8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0fa4) {
            ctx->pc = 0x3E0FE4u;
            goto label_3e0fe4;
        }
    }
    ctx->pc = 0x3E0FACu;
    // 0x3e0fac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3e0facu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e0fb0:
    // 0x3e0fb0: 0x8e2200e4  lw          $v0, 0xE4($s1)
    ctx->pc = 0x3e0fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
    // 0x3e0fb4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e0fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0fb8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3e0fb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3e0fbc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3e0fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3e0fc0: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E0FC0u;
    SET_GPR_U32(ctx, 31, 0x3E0FC8u);
    ctx->pc = 0x3E0FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0FC0u;
    // 0x3e0fc4: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E0FC0u, 0x3E0FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0FC8u;
label_3e0fc8:
    // 0x3e0fc8: 0x8e2200e4  lw          $v0, 0xE4($s1)
    ctx->pc = 0x3e0fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
    // 0x3e0fcc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3e0fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3e0fd0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3e0fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3e0fd4: 0x922200e9  lbu         $v0, 0xE9($s1)
    ctx->pc = 0x3e0fd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 233)));
    // 0x3e0fd8: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x3e0fd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3e0fdc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3E0FDCu;
    {
        const bool branch_taken_0x3e0fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0FDCu;
        // 0x3e0fe0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0fdc) {
            ctx->pc = 0x3E0FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e0fb0;
        }
    }
    ctx->pc = 0x3E0FE4u;
label_3e0fe4:
    // 0x3e0fe4: 0x8e2500e4  lw          $a1, 0xE4($s1)
    ctx->pc = 0x3e0fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
    // 0x3e0fe8: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E0FE8u;
    SET_GPR_U32(ctx, 31, 0x3E0FF0u);
    ctx->pc = 0x3E0FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0FE8u;
    // 0x3e0fec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E0FE8u, 0x3E0FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0FF0u;
label_3e0ff0:
    // 0x3e0ff0: 0xae2000e4  sw          $zero, 0xE4($s1)
    ctx->pc = 0x3e0ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 0));
label_3e0ff4:
    // 0x3e0ff4: 0xde220010  ld          $v0, 0x10($s1)
    ctx->pc = 0x3e0ff4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3e0ff8: 0x2403fbff  addiu       $v1, $zero, -0x401
    ctx->pc = 0x3e0ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
    // 0x3e0ffc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3e0ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3e1000: 0xfe220010  sd          $v0, 0x10($s1)
    ctx->pc = 0x3e1000u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 2));
    // 0x3e1004: 0xde2200f0  ld          $v0, 0xF0($s1)
    ctx->pc = 0x3e1004u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 240)));
label_3e1008:
    // 0x3e1008: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3e1008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x3e100c: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x3e100cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x3e1010: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x3E1010u;
    {
        const bool branch_taken_0x3e1010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e1010) {
            ctx->pc = 0x3E1014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E1010u;
            // 0x3e1014: 0xde2200f0  ld          $v0, 0xF0($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E104Cu;
            goto label_3e104c;
        }
    }
    ctx->pc = 0x3E1018u;
    // 0x3e1018: 0x8e250100  lw          $a1, 0x100($s1)
    ctx->pc = 0x3e1018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x3e101c: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E101Cu;
    SET_GPR_U32(ctx, 31, 0x3E1024u);
    ctx->pc = 0x3E1020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E101Cu;
    // 0x3e1020: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E101Cu, 0x3E1024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1024u;
label_3e1024:
    // 0x3e1024: 0x8e250104  lw          $a1, 0x104($s1)
    ctx->pc = 0x3e1024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x3e1028: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E1028u;
    SET_GPR_U32(ctx, 31, 0x3E1030u);
    ctx->pc = 0x3E102Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1028u;
    // 0x3e102c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E1028u, 0x3E1030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1030u;
label_3e1030:
    // 0x3e1030: 0xde220010  ld          $v0, 0x10($s1)
    ctx->pc = 0x3e1030u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3e1034: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x3e1034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x3e1038: 0xae200100  sw          $zero, 0x100($s1)
    ctx->pc = 0x3e1038u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
    // 0x3e103c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3e103cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3e1040: 0xae200104  sw          $zero, 0x104($s1)
    ctx->pc = 0x3e1040u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 0));
    // 0x3e1044: 0xfe220010  sd          $v0, 0x10($s1)
    ctx->pc = 0x3e1044u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 2));
    // 0x3e1048: 0xde2200f0  ld          $v0, 0xF0($s1)
    ctx->pc = 0x3e1048u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 240)));
label_3e104c:
    // 0x3e104c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3e104cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3e1050: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x3e1050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x3e1054: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x3E1054u;
    {
        const bool branch_taken_0x3e1054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1054u;
        // 0x3e1058: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1054) {
            ctx->pc = 0x3E1110u;
            goto label_3e1110;
        }
    }
    ctx->pc = 0x3E105Cu;
    // 0x3e105c: 0x52a20014  beql        $s5, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E105Cu;
    {
        const bool branch_taken_0x3e105c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x3e105c) {
            ctx->pc = 0x3E1060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E105Cu;
            // 0x3e1060: 0xde220118  ld          $v0, 0x118($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E10B0u;
            goto label_3e10b0;
        }
    }
    ctx->pc = 0x3E1064u;
    // 0x3e1064: 0x8e220114  lw          $v0, 0x114($s1)
    ctx->pc = 0x3e1064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x3e1068: 0x5040002a  beql        $v0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x3E1068u;
    {
        const bool branch_taken_0x3e1068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e1068) {
            ctx->pc = 0x3E106Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E1068u;
            // 0x3e106c: 0xde2200f0  ld          $v0, 0xF0($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E1114u;
            goto label_3e1114;
        }
    }
    ctx->pc = 0x3E1070u;
    // 0x3e1070: 0x24100018  addiu       $s0, $zero, 0x18
    ctx->pc = 0x3e1070u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3e1074: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e1074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1078: 0x2b08018  mult        $s0, $s5, $s0
    ctx->pc = 0x3e1078u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x3e107c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3e107cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3e1080: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E1080u;
    SET_GPR_U32(ctx, 31, 0x3E1088u);
    ctx->pc = 0x3E1084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1080u;
    // 0x3e1084: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E1080u, 0x3E1088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1088u;
label_3e1088:
    // 0x3e1088: 0x8e220114  lw          $v0, 0x114($s1)
    ctx->pc = 0x3e1088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x3e108c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e108cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1090: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3e1090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3e1094: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E1094u;
    SET_GPR_U32(ctx, 31, 0x3E109Cu);
    ctx->pc = 0x3E1098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1094u;
    // 0x3e1098: 0x8c450008  lw          $a1, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E1094u, 0x3E109Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E109Cu;
label_3e109c:
    // 0x3e109c: 0x8e220114  lw          $v0, 0x114($s1)
    ctx->pc = 0x3e109cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x3e10a0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3e10a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3e10a4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3e10a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x3e10a8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3E10A8u;
    {
        const bool branch_taken_0x3e10a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E10ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E10A8u;
        // 0x3e10ac: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e10a8) {
            ctx->pc = 0x3E1110u;
            goto label_3e1110;
        }
    }
    ctx->pc = 0x3E10B0u;
label_3e10b0:
    // 0x3e10b0: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E10B0u;
    {
        const bool branch_taken_0x3e10b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e10b0) {
            ctx->pc = 0x3E10B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E10B0u;
            // 0x3e10b4: 0xde220010  ld          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E1104u;
            goto label_3e1104;
        }
    }
    ctx->pc = 0x3E10B8u;
    // 0x3e10b8: 0x8e220118  lw          $v0, 0x118($s1)
    ctx->pc = 0x3e10b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x3e10bc: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3E10BCu;
    {
        const bool branch_taken_0x3e10bc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3E10C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E10BCu;
        // 0x3e10c0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e10bc) {
            ctx->pc = 0x3E10ECu;
            goto label_3e10ec;
        }
    }
    ctx->pc = 0x3E10C4u;
    // 0x3e10c4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3e10c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e10c8:
    // 0x3e10c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e10c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e10cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e10ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e10d0: 0xc0f838e  jal         func_3E0E38
    ctx->pc = 0x3E10D0u;
    SET_GPR_U32(ctx, 31, 0x3E10D8u);
    ctx->pc = 0x3E10D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E10D0u;
    // 0x3e10d4: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0E38u;
    goto label_3e0e38;
    ctx->pc = 0x3E10D8u;
label_3e10d8:
    // 0x3e10d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3e10d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3e10dc: 0x8e220118  lw          $v0, 0x118($s1)
    ctx->pc = 0x3e10dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x3e10e0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3e10e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3e10e4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3E10E4u;
    {
        const bool branch_taken_0x3e10e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E10E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E10E4u;
        // 0x3e10e8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e10e4) {
            ctx->pc = 0x3E10C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e10c8;
        }
    }
    ctx->pc = 0x3E10ECu;
label_3e10ec:
    // 0x3e10ec: 0x8e250114  lw          $a1, 0x114($s1)
    ctx->pc = 0x3e10ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x3e10f0: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E10F0u;
    SET_GPR_U32(ctx, 31, 0x3E10F8u);
    ctx->pc = 0x3E10F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E10F0u;
    // 0x3e10f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E10F0u, 0x3E10F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E10F8u;
label_3e10f8:
    // 0x3e10f8: 0xae200114  sw          $zero, 0x114($s1)
    ctx->pc = 0x3e10f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 276), GPR_U32(ctx, 0));
    // 0x3e10fc: 0xfe200118  sd          $zero, 0x118($s1)
    ctx->pc = 0x3e10fcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 280), GPR_U64(ctx, 0));
    // 0x3e1100: 0xde220010  ld          $v0, 0x10($s1)
    ctx->pc = 0x3e1100u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 16)));
label_3e1104:
    // 0x3e1104: 0x2403dfff  addiu       $v1, $zero, -0x2001
    ctx->pc = 0x3e1104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x3e1108: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3e1108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3e110c: 0xfe220010  sd          $v0, 0x10($s1)
    ctx->pc = 0x3e110cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 2));
label_3e1110:
    // 0x3e1110: 0xde2200f0  ld          $v0, 0xF0($s1)
    ctx->pc = 0x3e1110u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 240)));
label_3e1114:
    // 0x3e1114: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3e1114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3e1118: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x3e1118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x3e111c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3E111Cu;
    {
        const bool branch_taken_0x3e111c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E111Cu;
        // 0x3e1120: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e111c) {
            ctx->pc = 0x3E11B0u;
            goto label_3e11b0;
        }
    }
    ctx->pc = 0x3E1124u;
    // 0x3e1124: 0x52a2000e  beql        $s5, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3E1124u;
    {
        const bool branch_taken_0x3e1124 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x3e1124) {
            ctx->pc = 0x3E1128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E1124u;
            // 0x3e1128: 0x8e2200fc  lw          $v0, 0xFC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E1160u;
            goto label_3e1160;
        }
    }
    ctx->pc = 0x3E112Cu;
    // 0x3e112c: 0x8e2200f8  lw          $v0, 0xF8($s1)
    ctx->pc = 0x3e112cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x3e1130: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x3E1130u;
    {
        const bool branch_taken_0x3e1130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e1130) {
            ctx->pc = 0x3E1134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E1130u;
            // 0x3e1134: 0xde2200f0  ld          $v0, 0xF0($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E11B4u;
            goto label_3e11b4;
        }
    }
    ctx->pc = 0x3E1138u;
    // 0x3e1138: 0x24100014  addiu       $s0, $zero, 0x14
    ctx->pc = 0x3e1138u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3e113c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e113cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1140: 0x2b08018  mult        $s0, $s5, $s0
    ctx->pc = 0x3e1140u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x3e1144: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3e1144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3e1148: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E1148u;
    SET_GPR_U32(ctx, 31, 0x3E1150u);
    ctx->pc = 0x3E114Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1148u;
    // 0x3e114c: 0x8c450008  lw          $a1, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E1148u, 0x3E1150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1150u;
label_3e1150:
    // 0x3e1150: 0x8e2200f8  lw          $v0, 0xF8($s1)
    ctx->pc = 0x3e1150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x3e1154: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3e1154u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3e1158: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3E1158u;
    {
        const bool branch_taken_0x3e1158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E115Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1158u;
        // 0x3e115c: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1158) {
            ctx->pc = 0x3E11B0u;
            goto label_3e11b0;
        }
    }
    ctx->pc = 0x3E1160u;
label_3e1160:
    // 0x3e1160: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E1160u;
    {
        const bool branch_taken_0x3e1160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e1160) {
            ctx->pc = 0x3E1164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E1160u;
            // 0x3e1164: 0xde2200f0  ld          $v0, 0xF0($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E11B4u;
            goto label_3e11b4;
        }
    }
    ctx->pc = 0x3E1168u;
    // 0x3e1168: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3E1168u;
    {
        const bool branch_taken_0x3e1168 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3E116Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1168u;
        // 0x3e116c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1168) {
            ctx->pc = 0x3E119Cu;
            goto label_3e119c;
        }
    }
    ctx->pc = 0x3E1170u;
    // 0x3e1170: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3e1170u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1174: 0x0  nop
    ctx->pc = 0x3e1174u;
    // NOP
label_3e1178:
    // 0x3e1178: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e1178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e117c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e117cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1180: 0xc0f838e  jal         func_3E0E38
    ctx->pc = 0x3E1180u;
    SET_GPR_U32(ctx, 31, 0x3E1188u);
    ctx->pc = 0x3E1184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1180u;
    // 0x3e1184: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0E38u;
    goto label_3e0e38;
    ctx->pc = 0x3E1188u;
label_3e1188:
    // 0x3e1188: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3e1188u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3e118c: 0x8e2200fc  lw          $v0, 0xFC($s1)
    ctx->pc = 0x3e118cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x3e1190: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3e1190u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3e1194: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3E1194u;
    {
        const bool branch_taken_0x3e1194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E1198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1194u;
        // 0x3e1198: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1194) {
            ctx->pc = 0x3E1178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e1178;
        }
    }
    ctx->pc = 0x3E119Cu;
label_3e119c:
    // 0x3e119c: 0x8e2500f8  lw          $a1, 0xF8($s1)
    ctx->pc = 0x3e119cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x3e11a0: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E11A0u;
    SET_GPR_U32(ctx, 31, 0x3E11A8u);
    ctx->pc = 0x3E11A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E11A0u;
    // 0x3e11a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E11A0u, 0x3E11A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E11A8u;
label_3e11a8:
    // 0x3e11a8: 0xae2000f8  sw          $zero, 0xF8($s1)
    ctx->pc = 0x3e11a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 0));
    // 0x3e11ac: 0xae2000fc  sw          $zero, 0xFC($s1)
    ctx->pc = 0x3e11acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 252), GPR_U32(ctx, 0));
label_3e11b0:
    // 0x3e11b0: 0xde2200f0  ld          $v0, 0xF0($s1)
    ctx->pc = 0x3e11b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 240)));
label_3e11b4:
    // 0x3e11b4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x3e11b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x3e11b8: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x3e11b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x3e11bc: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3E11BCu;
    {
        const bool branch_taken_0x3e11bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e11bc) {
            ctx->pc = 0x3E11C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E11BCu;
            // 0x3e11c0: 0xde2200f0  ld          $v0, 0xF0($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E11E8u;
            goto label_3e11e8;
        }
    }
    ctx->pc = 0x3E11C4u;
    // 0x3e11c4: 0x8e2500a4  lw          $a1, 0xA4($s1)
    ctx->pc = 0x3e11c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x3e11c8: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E11C8u;
    SET_GPR_U32(ctx, 31, 0x3E11D0u);
    ctx->pc = 0x3E11CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E11C8u;
    // 0x3e11cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E11C8u, 0x3E11D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E11D0u;
label_3e11d0:
    // 0x3e11d0: 0xde220010  ld          $v0, 0x10($s1)
    ctx->pc = 0x3e11d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3e11d4: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x3e11d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x3e11d8: 0xae2000a4  sw          $zero, 0xA4($s1)
    ctx->pc = 0x3e11d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
    // 0x3e11dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3e11dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3e11e0: 0xfe220010  sd          $v0, 0x10($s1)
    ctx->pc = 0x3e11e0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 2));
    // 0x3e11e4: 0xde2200f0  ld          $v0, 0xF0($s1)
    ctx->pc = 0x3e11e4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 240)));
label_3e11e8:
    // 0x3e11e8: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x3e11e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x3e11ec: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x3e11ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x3e11f0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x3E11F0u;
    {
        const bool branch_taken_0x3e11f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e11f0) {
            ctx->pc = 0x3E11F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E11F0u;
            // 0x3e11f4: 0xde2200f0  ld          $v0, 0xF0($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E1220u;
            goto label_3e1220;
        }
    }
    ctx->pc = 0x3E11F8u;
    // 0x3e11f8: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x3e11f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3e11fc: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E11FCu;
    SET_GPR_U32(ctx, 31, 0x3E1204u);
    ctx->pc = 0x3E1200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E11FCu;
    // 0x3e1200: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E11FCu, 0x3E1204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1204u;
label_3e1204:
    // 0x3e1204: 0xde220010  ld          $v0, 0x10($s1)
    ctx->pc = 0x3e1204u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3e1208: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x3e1208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x3e120c: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x3e120cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x3e1210: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3e1210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3e1214: 0xa6200024  sh          $zero, 0x24($s1)
    ctx->pc = 0x3e1214u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x3e1218: 0xfe220010  sd          $v0, 0x10($s1)
    ctx->pc = 0x3e1218u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 2));
    // 0x3e121c: 0xde2200f0  ld          $v0, 0xF0($s1)
    ctx->pc = 0x3e121cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 240)));
label_3e1220:
    // 0x3e1220: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x3e1220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x3e1224: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x3e1224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x3e1228: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3E1228u;
    {
        const bool branch_taken_0x3e1228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1228u;
        // 0x3e122c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1228) {
            ctx->pc = 0x3E12ACu;
            goto label_3e12ac;
        }
    }
    ctx->pc = 0x3E1230u;
    // 0x3e1230: 0x8e220140  lw          $v0, 0x140($s1)
    ctx->pc = 0x3e1230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x3e1234: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x3E1234u;
    {
        const bool branch_taken_0x3e1234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e1234) {
            ctx->pc = 0x3E1238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E1234u;
            // 0x3e1238: 0xde220010  ld          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E1298u;
            goto label_3e1298;
        }
    }
    ctx->pc = 0x3E123Cu;
    // 0x3e123c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3e123cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3e1240: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3E1240u;
    {
        const bool branch_taken_0x3e1240 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3E1244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1240u;
        // 0x3e1244: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1240) {
            ctx->pc = 0x3E1284u;
            goto label_3e1284;
        }
    }
    ctx->pc = 0x3E1248u;
    // 0x3e1248: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3e1248u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e124c: 0x0  nop
    ctx->pc = 0x3e124cu;
    // NOP
label_3e1250:
    // 0x3e1250: 0x8e220140  lw          $v0, 0x140($s1)
    ctx->pc = 0x3e1250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x3e1254: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e1254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1258: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3e1258u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3e125c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3e125cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3e1260: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E1260u;
    SET_GPR_U32(ctx, 31, 0x3E1268u);
    ctx->pc = 0x3E1264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1260u;
    // 0x3e1264: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E1260u, 0x3E1268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1268u;
label_3e1268:
    // 0x3e1268: 0x8e220140  lw          $v0, 0x140($s1)
    ctx->pc = 0x3e1268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x3e126c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3e126cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3e1270: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3e1270u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3e1274: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3e1274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3e1278: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x3e1278u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3e127c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3E127Cu;
    {
        const bool branch_taken_0x3e127c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E1280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E127Cu;
        // 0x3e1280: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e127c) {
            ctx->pc = 0x3E1250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e1250;
        }
    }
    ctx->pc = 0x3E1284u;
label_3e1284:
    // 0x3e1284: 0x8e250140  lw          $a1, 0x140($s1)
    ctx->pc = 0x3e1284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x3e1288: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E1288u;
    SET_GPR_U32(ctx, 31, 0x3E1290u);
    ctx->pc = 0x3E128Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1288u;
    // 0x3e128c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E1288u, 0x3E1290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1290u;
label_3e1290:
    // 0x3e1290: 0xae200140  sw          $zero, 0x140($s1)
    ctx->pc = 0x3e1290u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 0));
    // 0x3e1294: 0xde220010  ld          $v0, 0x10($s1)
    ctx->pc = 0x3e1294u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 16)));
label_3e1298:
    // 0x3e1298: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3e1298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3e129c: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x3e129cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x3e12a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3e12a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3e12a4: 0xfe220010  sd          $v0, 0x10($s1)
    ctx->pc = 0x3e12a4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 2));
    // 0x3e12a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3e12a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3e12ac:
    // 0x3e12ac: 0x16a20006  bne         $s5, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E12ACu;
    {
        const bool branch_taken_0x3e12ac = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E12B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E12ACu;
        // 0x3e12b0: 0x2402bddf  addiu       $v0, $zero, -0x4221 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950367));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e12ac) {
            ctx->pc = 0x3E12C8u;
            goto label_3e12c8;
        }
    }
    ctx->pc = 0x3E12B4u;
    // 0x3e12b4: 0xde2200f0  ld          $v0, 0xF0($s1)
    ctx->pc = 0x3e12b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x3e12b8: 0x141827  nor         $v1, $zero, $s4
    ctx->pc = 0x3e12b8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 20)));
    // 0x3e12bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3e12bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3e12c0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3E12C0u;
    {
        const bool branch_taken_0x3e12c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E12C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E12C0u;
        // 0x3e12c4: 0xfe2200f0  sd          $v0, 0xF0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 240), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e12c0) {
            ctx->pc = 0x3E12DCu;
            goto label_3e12dc;
        }
    }
    ctx->pc = 0x3E12C8u;
label_3e12c8:
    // 0x3e12c8: 0xde2300f0  ld          $v1, 0xF0($s1)
    ctx->pc = 0x3e12c8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x3e12cc: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x3e12ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x3e12d0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x3e12d0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x3e12d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3e12d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3e12d8: 0xfe2300f0  sd          $v1, 0xF0($s1)
    ctx->pc = 0x3e12d8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 240), GPR_U64(ctx, 3));
label_3e12dc:
    // 0x3e12dc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3e12dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e12e0:
    // 0x3e12e0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3e12e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3e12e4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3e12e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3e12e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3e12e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e12ec: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3e12ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e12f0: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x3e12f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e12f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e12f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e12f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E12F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E12FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E12F8u;
        // 0x3e12fc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E12F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1300u;
    // 0x3e1300: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1300u;
        // 0x3e1304: 0x2402271c  addiu       $v0, $zero, 0x271C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10012));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1308u;
    // 0x3e1308: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3e1308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3e130c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3e130cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3e1310: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e1310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3e1314: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e1314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1318: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e1318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e131c: 0x2a020009  slti        $v0, $s0, 0x9
    ctx->pc = 0x3e131cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x3e1320: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E1320u;
    {
        const bool branch_taken_0x3e1320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E1324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1320u;
        // 0x3e1324: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1320) {
            ctx->pc = 0x3E1334u;
            goto label_3e1334;
        }
    }
    ctx->pc = 0x3E1328u;
    // 0x3e1328: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3e1328u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3e132c: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3E132Cu;
    SET_GPR_U32(ctx, 31, 0x3E1334u);
    ctx->pc = 0x3E1330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E132Cu;
    // 0x3e1330: 0x24a5e178  addiu       $a1, $a1, -0x1E88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3E132Cu, 0x3E1334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1334u;
label_3e1334:
    // 0x3e1334: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3e1334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3e1338: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3e1338u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e133c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x3e133cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3e1340: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e1340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e1344: 0x202180b  movn        $v1, $s0, $v0
    ctx->pc = 0x3e1344u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
    // 0x3e1348: 0xa2230210  sb          $v1, 0x210($s1)
    ctx->pc = 0x3e1348u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 528), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e134c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3e134cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e1350: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e1350u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e1354: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1354u;
        // 0x3e1358: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E135Cu;
    // 0x3e135c: 0x0  nop
    ctx->pc = 0x3e135cu;
    // NOP
    ctx->pc = 0x3e1360u;
}
