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

// Function: sub_0013FB50
// Address: 0x13fb50 - 0x13fcd0
void sub_0013FB50_0x13fb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013FB50_0x13fb50");
#endif

    switch (ctx->pc) {
        case 0x13fb7cu: goto label_13fb7c;
        case 0x13fba8u: goto label_13fba8;
        case 0x13fbb4u: goto label_13fbb4;
        case 0x13fbc4u: goto label_13fbc4;
        case 0x13fc00u: goto label_13fc00;
        case 0x13fc28u: goto label_13fc28;
        case 0x13fc38u: goto label_13fc38;
        case 0x13fc70u: goto label_13fc70;
        case 0x13fc88u: goto label_13fc88;
        case 0x13fc94u: goto label_13fc94;
        default: break;
    }

    ctx->pc = 0x13fb50u;

    // 0x13fb50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x13fb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x13fb54: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x13fb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x13fb58: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13fb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13fb5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13fb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13fb60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13fb60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13fb64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13fb64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13fb68: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x13fb68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x13fb6c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x13fb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13fb70: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x13fb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x13fb74: 0xc040e70  jal         func_1039C0
    ctx->pc = 0x13FB74u;
    SET_GPR_U32(ctx, 31, 0x13FB7Cu);
    ctx->pc = 0x1039C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039C0u, 0x13FB74u, 0x13FB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FB7Cu;
label_13fb7c:
    // 0x13fb7c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x13fb7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13fb80: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x13FB80u;
    {
        const bool branch_taken_0x13fb80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13fb80) {
            ctx->pc = 0x13FC48u;
            goto label_13fc48;
        }
    }
    ctx->pc = 0x13FB88u;
    // 0x13fb88: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x13fb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13fb8c: 0x8c530078  lw          $s3, 0x78($v0)
    ctx->pc = 0x13fb8cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x13fb90: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x13fb90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fb94: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x13fb94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fb98: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x13fb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13fb9c: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x13fb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x13fba0: 0xc042290  jal         func_108A40
    ctx->pc = 0x13FBA0u;
    SET_GPR_U32(ctx, 31, 0x13FBA8u);
    ctx->pc = 0x108A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A40u, 0x13FBA0u, 0x13FBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FBA8u;
label_13fba8:
    // 0x13fba8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13fba8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fbac: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x13FBACu;
    {
        const bool branch_taken_0x13fbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fbac) {
            ctx->pc = 0x13FBF0u;
            goto label_13fbf0;
        }
    }
    ctx->pc = 0x13FBB4u;
label_13fbb4:
    // 0x13fbb4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x13fbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13fbb8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x13fbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x13fbbc: 0xc085538  jal         func_2154E0
    ctx->pc = 0x13FBBCu;
    SET_GPR_U32(ctx, 31, 0x13FBC4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x13FBBCu, 0x13FBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FBC4u;
label_13fbc4:
    // 0x13fbc4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13fbc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fbc8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x13fbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13fbcc: 0x8c630078  lw          $v1, 0x78($v1)
    ctx->pc = 0x13fbccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x13fbd0: 0x14720005  bne         $v1, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x13FBD0u;
    {
        const bool branch_taken_0x13fbd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x13fbd0) {
            ctx->pc = 0x13FBE8u;
            goto label_13fbe8;
        }
    }
    ctx->pc = 0x13FBD8u;
    // 0x13fbd8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x13fbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13fbdc: 0xac710078  sw          $s1, 0x78($v1)
    ctx->pc = 0x13fbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 17));
    // 0x13fbe0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x13FBE0u;
    {
        const bool branch_taken_0x13fbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fbe0) {
            ctx->pc = 0x13FC08u;
            goto label_13fc08;
        }
    }
    ctx->pc = 0x13FBE8u;
label_13fbe8:
    // 0x13fbe8: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x13fbe8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fbec: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x13fbecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_13fbf0:
    // 0x13fbf0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x13fbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13fbf4: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x13fbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x13fbf8: 0xc042288  jal         func_108A20
    ctx->pc = 0x13FBF8u;
    SET_GPR_U32(ctx, 31, 0x13FC00u);
    ctx->pc = 0x108A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A20u, 0x13FBF8u, 0x13FC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FC00u;
label_13fc00:
    // 0x13fc00: 0x1602ffec  bne         $s0, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x13FC00u;
    {
        const bool branch_taken_0x13fc00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x13fc00) {
            ctx->pc = 0x13FBB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13fbb4;
        }
    }
    ctx->pc = 0x13FC08u;
label_13fc08:
    // 0x13fc08: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x13fc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13fc0c: 0x8c630078  lw          $v1, 0x78($v1)
    ctx->pc = 0x13fc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x13fc10: 0x1663000f  bne         $s3, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x13FC10u;
    {
        const bool branch_taken_0x13fc10 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x13fc10) {
            ctx->pc = 0x13FC50u;
            goto label_13fc50;
        }
    }
    ctx->pc = 0x13FC18u;
    // 0x13fc18: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x13fc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13fc1c: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x13fc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x13fc20: 0xc042290  jal         func_108A40
    ctx->pc = 0x13FC20u;
    SET_GPR_U32(ctx, 31, 0x13FC28u);
    ctx->pc = 0x108A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A40u, 0x13FC20u, 0x13FC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FC28u;
label_13fc28:
    // 0x13fc28: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x13fc28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13fc2c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x13fc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x13fc30: 0xc085538  jal         func_2154E0
    ctx->pc = 0x13FC30u;
    SET_GPR_U32(ctx, 31, 0x13FC38u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x13FC30u, 0x13FC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FC38u;
label_13fc38:
    // 0x13fc38: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x13fc38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13fc3c: 0xac620078  sw          $v0, 0x78($v1)
    ctx->pc = 0x13fc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 2));
    // 0x13fc40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13FC40u;
    {
        const bool branch_taken_0x13fc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fc40) {
            ctx->pc = 0x13FC50u;
            goto label_13fc50;
        }
    }
    ctx->pc = 0x13FC48u;
label_13fc48:
    // 0x13fc48: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x13fc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13fc4c: 0xac600078  sw          $zero, 0x78($v1)
    ctx->pc = 0x13fc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 0));
label_13fc50:
    // 0x13fc50: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x13fc50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13fc54: 0x8c630078  lw          $v1, 0x78($v1)
    ctx->pc = 0x13fc54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x13fc58: 0x10030010  beq         $zero, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x13FC58u;
    {
        const bool branch_taken_0x13fc58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x13fc58) {
            ctx->pc = 0x13FC9Cu;
            goto label_13fc9c;
        }
    }
    ctx->pc = 0x13FC60u;
    // 0x13fc60: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x13fc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13fc64: 0x8c440078  lw          $a0, 0x78($v0)
    ctx->pc = 0x13fc64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x13fc68: 0xc097444  jal         func_25D110
    ctx->pc = 0x13FC68u;
    SET_GPR_U32(ctx, 31, 0x13FC70u);
    ctx->pc = 0x25D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D110u, 0x13FC68u, 0x13FC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FC70u;
label_13fc70:
    // 0x13fc70: 0x8f83bb80  lw          $v1, -0x4480($gp)
    ctx->pc = 0x13fc70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x13fc74: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x13fc74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x13fc78: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x13fc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13fc7c: 0x8c440078  lw          $a0, 0x78($v0)
    ctx->pc = 0x13fc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x13fc80: 0xc097444  jal         func_25D110
    ctx->pc = 0x13FC80u;
    SET_GPR_U32(ctx, 31, 0x13FC88u);
    ctx->pc = 0x25D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D110u, 0x13FC80u, 0x13FC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FC88u;
label_13fc88:
    // 0x13fc88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13fc88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fc8c: 0xc089a90  jal         func_226A40
    ctx->pc = 0x13FC8Cu;
    SET_GPR_U32(ctx, 31, 0x13FC94u);
    ctx->pc = 0x226A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226A40u, 0x13FC8Cu, 0x13FC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FC94u;
label_13fc94:
    // 0x13fc94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13FC94u;
    {
        const bool branch_taken_0x13fc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fc94) {
            ctx->pc = 0x13FCA4u;
            goto label_13fca4;
        }
    }
    ctx->pc = 0x13FC9Cu;
label_13fc9c:
    // 0x13fc9c: 0x8f83bb80  lw          $v1, -0x4480($gp)
    ctx->pc = 0x13fc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x13fca0: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x13fca0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
label_13fca4:
    // 0x13fca4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x13fca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13fca8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13fca8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13fcac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13fcacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13fcb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13fcb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13fcb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13fcb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13fcb8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x13fcb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13fcbc: 0x3e00008  jr          $ra
    ctx->pc = 0x13FCBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13FCBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13FCC4u;
    // 0x13fcc4: 0x0  nop
    ctx->pc = 0x13fcc4u;
    // NOP
    // 0x13fcc8: 0x0  nop
    ctx->pc = 0x13fcc8u;
    // NOP
    // 0x13fccc: 0x0  nop
    ctx->pc = 0x13fcccu;
    // NOP
    ctx->pc = 0x13fcd0u;
}
