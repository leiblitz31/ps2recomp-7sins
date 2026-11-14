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

// Function: sub_003B8E80
// Address: 0x3b8e80 - 0x3b9148
void sub_003B8E80_0x3b8e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B8E80_0x3b8e80");
#endif

    switch (ctx->pc) {
        case 0x3b8ebcu: goto label_3b8ebc;
        case 0x3b8ee0u: goto label_3b8ee0;
        case 0x3b8ef4u: goto label_3b8ef4;
        case 0x3b8f10u: goto label_3b8f10;
        case 0x3b8f1cu: goto label_3b8f1c;
        case 0x3b8f3cu: goto label_3b8f3c;
        case 0x3b8f84u: goto label_3b8f84;
        case 0x3b8fa4u: goto label_3b8fa4;
        case 0x3b8fb0u: goto label_3b8fb0;
        case 0x3b8fccu: goto label_3b8fcc;
        case 0x3b8ff8u: goto label_3b8ff8;
        case 0x3b901cu: goto label_3b901c;
        case 0x3b903cu: goto label_3b903c;
        case 0x3b9048u: goto label_3b9048;
        case 0x3b9064u: goto label_3b9064;
        case 0x3b9094u: goto label_3b9094;
        case 0x3b90b4u: goto label_3b90b4;
        case 0x3b90c0u: goto label_3b90c0;
        case 0x3b90dcu: goto label_3b90dc;
        default: break;
    }

    ctx->pc = 0x3b8e80u;

    // 0x3b8e80: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3b8e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x3b8e84: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x3b8e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x3b8e88: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x3b8e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x3b8e8c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3b8e8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8e90: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x3b8e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x3b8e94: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3b8e94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8e98: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x3b8e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x3b8e9c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x3b8e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x3b8ea0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3b8ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x3b8ea4: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x3b8ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x3b8ea8: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x3b8ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x3b8eac: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x3b8eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x3b8eb0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b8eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3b8eb4: 0xc0ed312  jal         func_3B4C48
    ctx->pc = 0x3B8EB4u;
    SET_GPR_U32(ctx, 31, 0x3B8EBCu);
    ctx->pc = 0x3B8EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8EB4u;
    // 0x3b8eb8: 0xafa40018  sw          $a0, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4C48u, 0x3B8EB4u, 0x3B8EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8EBCu;
label_3b8ebc:
    // 0x3b8ebc: 0x10400095  beqz        $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x3B8EBCu;
    {
        const bool branch_taken_0x3b8ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8EBCu;
        // 0x3b8ec0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8ebc) {
            ctx->pc = 0x3B9114u;
            goto label_3b9114;
        }
    }
    ctx->pc = 0x3B8EC4u;
    // 0x3b8ec4: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x3B8EC4u;
    {
        const bool branch_taken_0x3b8ec4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8EC4u;
        // 0x3b8ec8: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8ec4) {
            ctx->pc = 0x3B8F04u;
            goto label_3b8f04;
        }
    }
    ctx->pc = 0x3B8ECCu;
    // 0x3b8ecc: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x3b8eccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3b8ed0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b8ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8ed4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3b8ed4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8ed8: 0xc0edcca  jal         func_3B7328
    ctx->pc = 0x3B8ED8u;
    SET_GPR_U32(ctx, 31, 0x3B8EE0u);
    ctx->pc = 0x3B8EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8ED8u;
    // 0x3b8edc: 0x8c4500b0  lw          $a1, 0xB0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7328u, 0x3B8ED8u, 0x3B8EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8EE0u;
label_3b8ee0:
    // 0x3b8ee0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B8EE0u;
    {
        const bool branch_taken_0x3b8ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8EE0u;
        // 0x3b8ee4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8ee0) {
            ctx->pc = 0x3B8EFCu;
            goto label_3b8efc;
        }
    }
    ctx->pc = 0x3B8EE8u;
    // 0x3b8ee8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b8ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8eec: 0xc103440  jal         func_40D100
    ctx->pc = 0x3B8EECu;
    SET_GPR_U32(ctx, 31, 0x3B8EF4u);
    ctx->pc = 0x3B8EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8EECu;
    // 0x3b8ef0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3B8EECu, 0x3B8EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8EF4u;
label_3b8ef4:
    // 0x3b8ef4: 0x14400087  bnez        $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x3B8EF4u;
    {
        const bool branch_taken_0x3b8ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B8EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8EF4u;
        // 0x3b8ef8: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8ef4) {
            ctx->pc = 0x3B9114u;
            goto label_3b9114;
        }
    }
    ctx->pc = 0x3B8EFCu;
label_3b8efc:
    // 0x3b8efc: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x3B8EFCu;
    {
        const bool branch_taken_0x3b8efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8EFCu;
        // 0x3b8f00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8efc) {
            ctx->pc = 0x3B9114u;
            goto label_3b9114;
        }
    }
    ctx->pc = 0x3B8F04u;
label_3b8f04:
    // 0x3b8f04: 0x8c5e00b0  lw          $fp, 0xB0($v0)
    ctx->pc = 0x3b8f04u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x3b8f08: 0xc10376a  jal         func_40DDA8
    ctx->pc = 0x3B8F08u;
    SET_GPR_U32(ctx, 31, 0x3B8F10u);
    ctx->pc = 0x3B8F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8F08u;
    // 0x3b8f0c: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3B8F08u, 0x3B8F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8F10u;
label_3b8f10:
    // 0x3b8f10: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x3b8f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3b8f14: 0xc1036d2  jal         func_40DB48
    ctx->pc = 0x3B8F14u;
    SET_GPR_U32(ctx, 31, 0x3B8F1Cu);
    ctx->pc = 0x3B8F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8F14u;
    // 0x3b8f18: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3B8F14u, 0x3B8F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8F1Cu;
label_3b8f1c:
    // 0x3b8f1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b8f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b8f20: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b8f20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8f24: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x3b8f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x3b8f28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b8f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8f2c: 0xafb70004  sw          $s7, 0x4($sp)
    ctx->pc = 0x3b8f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 23));
    // 0x3b8f30: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3b8f30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8f34: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x3B8F34u;
    SET_GPR_U32(ctx, 31, 0x3B8F3Cu);
    ctx->pc = 0x3B8F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8F34u;
    // 0x3b8f38: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x3B8F34u, 0x3B8F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8F3Cu;
label_3b8f3c:
    // 0x3b8f3c: 0x10400072  beqz        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x3B8F3Cu;
    {
        const bool branch_taken_0x3b8f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8F3Cu;
        // 0x3b8f40: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8f3c) {
            ctx->pc = 0x3B9108u;
            goto label_3b9108;
        }
    }
    ctx->pc = 0x3B8F44u;
    // 0x3b8f44: 0x1ae0006f  blez        $s7, . + 4 + (0x6F << 2)
    ctx->pc = 0x3B8F44u;
    {
        const bool branch_taken_0x3b8f44 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x3B8F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8F44u;
        // 0x3b8f48: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8f44) {
            ctx->pc = 0x3B9104u;
            goto label_3b9104;
        }
    }
    ctx->pc = 0x3B8F4Cu;
    // 0x3b8f4c: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x3b8f4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x3b8f50: 0x1ae00003  blez        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B8F50u;
    {
        const bool branch_taken_0x3b8f50 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x3B8F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8F50u;
        // 0x3b8f54: 0x32e20001  andi        $v0, $s7, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8f50) {
            ctx->pc = 0x3B8F60u;
            goto label_3b8f60;
        }
    }
    ctx->pc = 0x3B8F58u;
    // 0x3b8f58: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3B8F58u;
    {
        const bool branch_taken_0x3b8f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8F58u;
        // 0x3b8f5c: 0x240a82d  daddu       $s5, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8f58) {
            ctx->pc = 0x3B8FECu;
            goto label_3b8fec;
        }
    }
    ctx->pc = 0x3B8F60u;
label_3b8f60:
    // 0x3b8f60: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x3b8f60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x3b8f64: 0x8e42fffc  lw          $v0, -0x4($s2)
    ctx->pc = 0x3b8f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
    // 0x3b8f68: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B8F68u;
    {
        const bool branch_taken_0x3b8f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8F68u;
        // 0x3b8f6c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8f68) {
            ctx->pc = 0x3B8F74u;
            goto label_3b8f74;
        }
    }
    ctx->pc = 0x3B8F70u;
    // 0x3b8f70: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x3b8f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_3b8f74:
    // 0x3b8f74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b8f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8f78: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x3b8f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x3b8f7c: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x3B8F7Cu;
    SET_GPR_U32(ctx, 31, 0x3B8F84u);
    ctx->pc = 0x3B8F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8F7Cu;
    // 0x3b8f80: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x3B8F7Cu, 0x3B8F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8F84u;
label_3b8f84:
    // 0x3b8f84: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x3B8F84u;
    {
        const bool branch_taken_0x3b8f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8F84u;
        // 0x3b8f88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8f84) {
            ctx->pc = 0x3B9108u;
            goto label_3b9108;
        }
    }
    ctx->pc = 0x3B8F8Cu;
    // 0x3b8f8c: 0x8e42fffc  lw          $v0, -0x4($s2)
    ctx->pc = 0x3b8f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
    // 0x3b8f90: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3B8F90u;
    {
        const bool branch_taken_0x3b8f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8F90u;
        // 0x3b8f94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8f90) {
            ctx->pc = 0x3B8FD4u;
            goto label_3b8fd4;
        }
    }
    ctx->pc = 0x3B8F98u;
    // 0x3b8f98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b8f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8f9c: 0xc103440  jal         func_40D100
    ctx->pc = 0x3B8F9Cu;
    SET_GPR_U32(ctx, 31, 0x3B8FA4u);
    ctx->pc = 0x3B8FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8F9Cu;
    // 0x3b8fa0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3B8F9Cu, 0x3B8FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8FA4u;
label_3b8fa4:
    // 0x3b8fa4: 0x8e44fffc  lw          $a0, -0x4($s2)
    ctx->pc = 0x3b8fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
    // 0x3b8fa8: 0xc0ec322  jal         func_3B0C88
    ctx->pc = 0x3B8FA8u;
    SET_GPR_U32(ctx, 31, 0x3B8FB0u);
    ctx->pc = 0x3B8FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8FA8u;
    // 0x3b8fac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0C88u, 0x3B8FA8u, 0x3B8FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8FB0u;
label_3b8fb0:
    // 0x3b8fb0: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x3B8FB0u;
    {
        const bool branch_taken_0x3b8fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8FB0u;
        // 0x3b8fb4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8fb0) {
            ctx->pc = 0x3B9108u;
            goto label_3b9108;
        }
    }
    ctx->pc = 0x3B8FB8u;
    // 0x3b8fb8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x3b8fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3b8fbc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B8FBCu;
    {
        const bool branch_taken_0x3b8fbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8fbc) {
            ctx->pc = 0x3B8FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B8FBCu;
            // 0x3b8fc0: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B8FD8u;
            goto label_3b8fd8;
        }
    }
    ctx->pc = 0x3B8FC4u;
    // 0x3b8fc4: 0xc0e9cd8  jal         func_3A7360
    ctx->pc = 0x3B8FC4u;
    SET_GPR_U32(ctx, 31, 0x3B8FCCu);
    ctx->pc = 0x3B8FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8FC4u;
    // 0x3b8fc8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7360u, 0x3B8FC4u, 0x3B8FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8FCCu;
label_3b8fcc:
    // 0x3b8fcc: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x3B8FCCu;
    {
        const bool branch_taken_0x3b8fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8FCCu;
        // 0x3b8fd0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8fcc) {
            ctx->pc = 0x3B9108u;
            goto label_3b9108;
        }
    }
    ctx->pc = 0x3B8FD4u;
label_3b8fd4:
    // 0x3b8fd4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x3b8fd4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3b8fd8:
    // 0x3b8fd8: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x3b8fd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x3b8fdc: 0x2d7102a  slt         $v0, $s6, $s7
    ctx->pc = 0x3b8fdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x3b8fe0: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x3B8FE0u;
    {
        const bool branch_taken_0x3b8fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8FE0u;
        // 0x3b8fe4: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8fe0) {
            ctx->pc = 0x3B9104u;
            goto label_3b9104;
        }
    }
    ctx->pc = 0x3B8FE8u;
    // 0x3b8fe8: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x3b8fe8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b8fec:
    // 0x3b8fec: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x3b8fecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8ff0: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x3b8ff0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8ff4: 0x0  nop
    ctx->pc = 0x3b8ff4u;
    // NOP
label_3b8ff8:
    // 0x3b8ff8: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x3b8ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x3b8ffc: 0x8e62fffc  lw          $v0, -0x4($s3)
    ctx->pc = 0x3b8ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967292)));
    // 0x3b9000: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B9000u;
    {
        const bool branch_taken_0x3b9000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9000u;
        // 0x3b9004: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9000) {
            ctx->pc = 0x3B900Cu;
            goto label_3b900c;
        }
    }
    ctx->pc = 0x3B9008u;
    // 0x3b9008: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x3b9008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_3b900c:
    // 0x3b900c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b900cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9010: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x3b9010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x3b9014: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x3B9014u;
    SET_GPR_U32(ctx, 31, 0x3B901Cu);
    ctx->pc = 0x3B9018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9014u;
    // 0x3b9018: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x3B9014u, 0x3B901Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B901Cu;
label_3b901c:
    // 0x3b901c: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x3B901Cu;
    {
        const bool branch_taken_0x3b901c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B901Cu;
        // 0x3b9020: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b901c) {
            ctx->pc = 0x3B9108u;
            goto label_3b9108;
        }
    }
    ctx->pc = 0x3B9024u;
    // 0x3b9024: 0x8e82fffc  lw          $v0, -0x4($s4)
    ctx->pc = 0x3b9024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967292)));
    // 0x3b9028: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3B9028u;
    {
        const bool branch_taken_0x3b9028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B902Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9028u;
        // 0x3b902c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9028) {
            ctx->pc = 0x3B906Cu;
            goto label_3b906c;
        }
    }
    ctx->pc = 0x3B9030u;
    // 0x3b9030: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b9030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9034: 0xc103440  jal         func_40D100
    ctx->pc = 0x3B9034u;
    SET_GPR_U32(ctx, 31, 0x3B903Cu);
    ctx->pc = 0x3B9038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9034u;
    // 0x3b9038: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3B9034u, 0x3B903Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B903Cu;
label_3b903c:
    // 0x3b903c: 0x8ea4fffc  lw          $a0, -0x4($s5)
    ctx->pc = 0x3b903cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967292)));
    // 0x3b9040: 0xc0ec322  jal         func_3B0C88
    ctx->pc = 0x3B9040u;
    SET_GPR_U32(ctx, 31, 0x3B9048u);
    ctx->pc = 0x3B9044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9040u;
    // 0x3b9044: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0C88u, 0x3B9040u, 0x3B9048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9048u;
label_3b9048:
    // 0x3b9048: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x3B9048u;
    {
        const bool branch_taken_0x3b9048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B904Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9048u;
        // 0x3b904c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9048) {
            ctx->pc = 0x3B9108u;
            goto label_3b9108;
        }
    }
    ctx->pc = 0x3B9050u;
    // 0x3b9050: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3b9050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3b9054: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B9054u;
    {
        const bool branch_taken_0x3b9054 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9054) {
            ctx->pc = 0x3B9058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B9054u;
            // 0x3b9058: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B9070u;
            goto label_3b9070;
        }
    }
    ctx->pc = 0x3B905Cu;
    // 0x3b905c: 0xc0e9cd8  jal         func_3A7360
    ctx->pc = 0x3B905Cu;
    SET_GPR_U32(ctx, 31, 0x3B9064u);
    ctx->pc = 0x3B9060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B905Cu;
    // 0x3b9060: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7360u, 0x3B905Cu, 0x3B9064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9064u;
label_3b9064:
    // 0x3b9064: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x3B9064u;
    {
        const bool branch_taken_0x3b9064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9064u;
        // 0x3b9068: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9064) {
            ctx->pc = 0x3B9108u;
            goto label_3b9108;
        }
    }
    ctx->pc = 0x3B906Cu;
label_3b906c:
    // 0x3b906c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x3b906cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_3b9070:
    // 0x3b9070: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x3b9070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x3b9074: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B9074u;
    {
        const bool branch_taken_0x3b9074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9074u;
        // 0x3b9078: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9074) {
            ctx->pc = 0x3B9084u;
            goto label_3b9084;
        }
    }
    ctx->pc = 0x3B907Cu;
    // 0x3b907c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3b907cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b9080: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x3b9080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_3b9084:
    // 0x3b9084: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b9084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9088: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x3b9088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x3b908c: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x3B908Cu;
    SET_GPR_U32(ctx, 31, 0x3B9094u);
    ctx->pc = 0x3B9090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B908Cu;
    // 0x3b9090: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x3B908Cu, 0x3B9094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9094u;
label_3b9094:
    // 0x3b9094: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3B9094u;
    {
        const bool branch_taken_0x3b9094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9094u;
        // 0x3b9098: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9094) {
            ctx->pc = 0x3B9108u;
            goto label_3b9108;
        }
    }
    ctx->pc = 0x3B909Cu;
    // 0x3b909c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x3b909cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x3b90a0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3B90A0u;
    {
        const bool branch_taken_0x3b90a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B90A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B90A0u;
        // 0x3b90a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b90a0) {
            ctx->pc = 0x3B90E4u;
            goto label_3b90e4;
        }
    }
    ctx->pc = 0x3B90A8u;
    // 0x3b90a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b90a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b90ac: 0xc103440  jal         func_40D100
    ctx->pc = 0x3B90ACu;
    SET_GPR_U32(ctx, 31, 0x3B90B4u);
    ctx->pc = 0x3B90B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B90ACu;
    // 0x3b90b0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3B90ACu, 0x3B90B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B90B4u;
label_3b90b4:
    // 0x3b90b4: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x3b90b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x3b90b8: 0xc0ec322  jal         func_3B0C88
    ctx->pc = 0x3B90B8u;
    SET_GPR_U32(ctx, 31, 0x3B90C0u);
    ctx->pc = 0x3B90BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B90B8u;
    // 0x3b90bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0C88u, 0x3B90B8u, 0x3B90C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B90C0u;
label_3b90c0:
    // 0x3b90c0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3B90C0u;
    {
        const bool branch_taken_0x3b90c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B90C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B90C0u;
        // 0x3b90c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b90c0) {
            ctx->pc = 0x3B9108u;
            goto label_3b9108;
        }
    }
    ctx->pc = 0x3B90C8u;
    // 0x3b90c8: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x3b90c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x3b90cc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B90CCu;
    {
        const bool branch_taken_0x3b90cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b90cc) {
            ctx->pc = 0x3B90D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B90CCu;
            // 0x3b90d0: 0x26d60002  addiu       $s6, $s6, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B90E8u;
            goto label_3b90e8;
        }
    }
    ctx->pc = 0x3B90D4u;
    // 0x3b90d4: 0xc0e9cd8  jal         func_3A7360
    ctx->pc = 0x3B90D4u;
    SET_GPR_U32(ctx, 31, 0x3B90DCu);
    ctx->pc = 0x3B90D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B90D4u;
    // 0x3b90d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7360u, 0x3B90D4u, 0x3B90DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B90DCu;
label_3b90dc:
    // 0x3b90dc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3B90DCu;
    {
        const bool branch_taken_0x3b90dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B90E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B90DCu;
        // 0x3b90e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b90dc) {
            ctx->pc = 0x3B9108u;
            goto label_3b9108;
        }
    }
    ctx->pc = 0x3B90E4u;
label_3b90e4:
    // 0x3b90e4: 0x26d60002  addiu       $s6, $s6, 0x2
    ctx->pc = 0x3b90e4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
label_3b90e8:
    // 0x3b90e8: 0x26520018  addiu       $s2, $s2, 0x18
    ctx->pc = 0x3b90e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x3b90ec: 0x26b50018  addiu       $s5, $s5, 0x18
    ctx->pc = 0x3b90ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
    // 0x3b90f0: 0x26940018  addiu       $s4, $s4, 0x18
    ctx->pc = 0x3b90f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x3b90f4: 0x26730018  addiu       $s3, $s3, 0x18
    ctx->pc = 0x3b90f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x3b90f8: 0x2d7102a  slt         $v0, $s6, $s7
    ctx->pc = 0x3b90f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x3b90fc: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x3B90FCu;
    {
        const bool branch_taken_0x3b90fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B9100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B90FCu;
        // 0x3b9100: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b90fc) {
            ctx->pc = 0x3B8FF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b8ff8;
        }
    }
    ctx->pc = 0x3B9104u;
label_3b9104:
    // 0x3b9104: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3b9104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b9108:
    // 0x3b9108: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B9108u;
    {
        const bool branch_taken_0x3b9108 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B910Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9108u;
        // 0x3b910c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9108) {
            ctx->pc = 0x3B9114u;
            goto label_3b9114;
        }
    }
    ctx->pc = 0x3B9110u;
    // 0x3b9110: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3b9110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3b9114:
    // 0x3b9114: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x3b9114u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3b9118: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x3b9118u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3b911c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x3b911cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3b9120: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x3b9120u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3b9124: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x3b9124u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3b9128: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3b9128u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b912c: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x3b912cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b9130: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x3b9130u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b9134: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x3b9134u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b9138: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b9138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b913c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B913Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B9140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B913Cu;
        // 0x3b9140: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B913Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B9144u;
    // 0x3b9144: 0x0  nop
    ctx->pc = 0x3b9144u;
    // NOP
    ctx->pc = 0x3b9148u;
}
