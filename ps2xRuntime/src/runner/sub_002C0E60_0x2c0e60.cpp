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

// Function: sub_002C0E60
// Address: 0x2c0e60 - 0x2c10a0
void sub_002C0E60_0x2c0e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0E60_0x2c0e60");
#endif

    switch (ctx->pc) {
        case 0x2c0ea4u: goto label_2c0ea4;
        case 0x2c0eb0u: goto label_2c0eb0;
        case 0x2c0ec0u: goto label_2c0ec0;
        case 0x2c0ed0u: goto label_2c0ed0;
        case 0x2c0edcu: goto label_2c0edc;
        case 0x2c0ef0u: goto label_2c0ef0;
        case 0x2c0f04u: goto label_2c0f04;
        case 0x2c0f1cu: goto label_2c0f1c;
        case 0x2c0f38u: goto label_2c0f38;
        case 0x2c0f68u: goto label_2c0f68;
        case 0x2c0f7cu: goto label_2c0f7c;
        case 0x2c0f8cu: goto label_2c0f8c;
        case 0x2c0f9cu: goto label_2c0f9c;
        case 0x2c0facu: goto label_2c0fac;
        case 0x2c0fdcu: goto label_2c0fdc;
        case 0x2c0fecu: goto label_2c0fec;
        case 0x2c0ffcu: goto label_2c0ffc;
        case 0x2c101cu: goto label_2c101c;
        case 0x2c102cu: goto label_2c102c;
        case 0x2c103cu: goto label_2c103c;
        case 0x2c104cu: goto label_2c104c;
        case 0x2c1068u: goto label_2c1068;
        default: break;
    }

    ctx->pc = 0x2c0e60u;

    // 0x2c0e60: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2c0e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2c0e64: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2c0e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2c0e68: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2c0e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2c0e6c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2c0e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2c0e70: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2c0e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2c0e74: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c0e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c0e78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c0e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c0e7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c0e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c0e80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c0e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c0e84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c0e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c0e88: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x2c0e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
    // 0x2c0e8c: 0xafa600c0  sw          $a2, 0xC0($sp)
    ctx->pc = 0x2c0e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 6));
    // 0x2c0e90: 0xafa700d0  sw          $a3, 0xD0($sp)
    ctx->pc = 0x2c0e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 7));
    // 0x2c0e94: 0xa3a800e0  sb          $t0, 0xE0($sp)
    ctx->pc = 0x2c0e94u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 224), (uint8_t)GPR_U32(ctx, 8));
    // 0x2c0e98: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2c0e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2c0e9c: 0xc0b05b0  jal         func_2C16C0
    ctx->pc = 0x2C0E9Cu;
    SET_GPR_U32(ctx, 31, 0x2C0EA4u);
    ctx->pc = 0x2C16C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C16C0u, 0x2C0E9Cu, 0x2C0EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0EA4u;
label_2c0ea4:
    // 0x2c0ea4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2c0ea4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0ea8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2C0EA8u;
    {
        const bool branch_taken_0x2c0ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0ea8) {
            ctx->pc = 0x2C0F44u;
            goto label_2c0f44;
        }
    }
    ctx->pc = 0x2C0EB0u;
label_2c0eb0:
    // 0x2c0eb0: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x2c0eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2c0eb4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c0eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0eb8: 0xc09681c  jal         func_25A070
    ctx->pc = 0x2C0EB8u;
    SET_GPR_U32(ctx, 31, 0x2C0EC0u);
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x2C0EB8u, 0x2C0EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0EC0u;
label_2c0ec0:
    // 0x2c0ec0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2c0ec0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0ec4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c0ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0ec8: 0xc0525e4  jal         func_149790
    ctx->pc = 0x2C0EC8u;
    SET_GPR_U32(ctx, 31, 0x2C0ED0u);
    ctx->pc = 0x149790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149790u, 0x2C0EC8u, 0x2C0ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0ED0u;
label_2c0ed0:
    // 0x2c0ed0: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x2c0ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
    // 0x2c0ed4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2C0ED4u;
    {
        const bool branch_taken_0x2c0ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0ed4) {
            ctx->pc = 0x2C0F28u;
            goto label_2c0f28;
        }
    }
    ctx->pc = 0x2C0EDCu;
label_2c0edc:
    // 0x2c0edc: 0x8fb700d0  lw          $s7, 0xD0($sp)
    ctx->pc = 0x2c0edcu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2c0ee0: 0x8fa2009c  lw          $v0, 0x9C($sp)
    ctx->pc = 0x2c0ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x2c0ee4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2c0ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c0ee8: 0xc048094  jal         func_120250
    ctx->pc = 0x2C0EE8u;
    SET_GPR_U32(ctx, 31, 0x2C0EF0u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x2C0EE8u, 0x2C0EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0EF0u;
label_2c0ef0:
    // 0x2c0ef0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c0ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0ef4: 0x2405047e  addiu       $a1, $zero, 0x47E
    ctx->pc = 0x2c0ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1150));
    // 0x2c0ef8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c0ef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0efc: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x2C0EFCu;
    SET_GPR_U32(ctx, 31, 0x2C0F04u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x2C0EFCu, 0x2C0F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0F04u;
label_2c0f04:
    // 0x2c0f04: 0x16e20005  bne         $s7, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C0F04u;
    {
        const bool branch_taken_0x2c0f04 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c0f04) {
            ctx->pc = 0x2C0F1Cu;
            goto label_2c0f1c;
        }
    }
    ctx->pc = 0x2C0F0Cu;
    // 0x2c0f0c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2c0f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2c0f10: 0x27a5009c  addiu       $a1, $sp, 0x9C
    ctx->pc = 0x2c0f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x2c0f14: 0xc0b04e0  jal         func_2C1380
    ctx->pc = 0x2C0F14u;
    SET_GPR_U32(ctx, 31, 0x2C0F1Cu);
    ctx->pc = 0x2C1380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1380u, 0x2C0F14u, 0x2C0F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0F1Cu;
label_2c0f1c:
    // 0x2c0f1c: 0x8fa2009c  lw          $v0, 0x9C($sp)
    ctx->pc = 0x2c0f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x2c0f20: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x2c0f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2c0f24: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x2c0f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
label_2c0f28:
    // 0x2c0f28: 0x8fb7009c  lw          $s7, 0x9C($sp)
    ctx->pc = 0x2c0f28u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x2c0f2c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c0f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0f30: 0xc0525dc  jal         func_149770
    ctx->pc = 0x2C0F30u;
    SET_GPR_U32(ctx, 31, 0x2C0F38u);
    ctx->pc = 0x149770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149770u, 0x2C0F30u, 0x2C0F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0F38u;
label_2c0f38:
    // 0x2c0f38: 0x16e2ffe8  bne         $s7, $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2C0F38u;
    {
        const bool branch_taken_0x2c0f38 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c0f38) {
            ctx->pc = 0x2C0EDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c0edc;
        }
    }
    ctx->pc = 0x2C0F40u;
    // 0x2c0f40: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2c0f40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2c0f44:
    // 0x2c0f44: 0x2e410004  sltiu       $at, $s2, 0x4
    ctx->pc = 0x2c0f44u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2c0f48: 0x1420ffd9  bnez        $at, . + 4 + (-0x27 << 2)
    ctx->pc = 0x2C0F48u;
    {
        const bool branch_taken_0x2c0f48 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c0f48) {
            ctx->pc = 0x2C0EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c0eb0;
        }
    }
    ctx->pc = 0x2C0F50u;
    // 0x2c0f50: 0x93a200e0  lbu         $v0, 0xE0($sp)
    ctx->pc = 0x2c0f50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2c0f54: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2C0F54u;
    {
        const bool branch_taken_0x2c0f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0f54) {
            ctx->pc = 0x2C1010u;
            goto label_2c1010;
        }
    }
    ctx->pc = 0x2C0F5Cu;
    // 0x2c0f5c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2c0f5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0f60: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2C0F60u;
    {
        const bool branch_taken_0x2c0f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0f60) {
            ctx->pc = 0x2C0FF0u;
            goto label_2c0ff0;
        }
    }
    ctx->pc = 0x2C0F68u;
label_2c0f68:
    // 0x2c0f68: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2c0f68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0f6c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2c0f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2c0f70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c0f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0f74: 0xc0b04c8  jal         func_2C1320
    ctx->pc = 0x2C0F74u;
    SET_GPR_U32(ctx, 31, 0x2C0F7Cu);
    ctx->pc = 0x2C1320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1320u, 0x2C0F74u, 0x2C0F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0F7Cu;
label_2c0f7c:
    // 0x2c0f7c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c0f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c0f80: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2c0f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c0f84: 0xc0b04c0  jal         func_2C1300
    ctx->pc = 0x2C0F84u;
    SET_GPR_U32(ctx, 31, 0x2C0F8Cu);
    ctx->pc = 0x2C1300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1300u, 0x2C0F84u, 0x2C0F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0F8Cu;
label_2c0f8c:
    // 0x2c0f8c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2c0f8cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0f90: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2c0f90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0f94: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C0F94u;
    {
        const bool branch_taken_0x2c0f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0f94) {
            ctx->pc = 0x2C0FA0u;
            goto label_2c0fa0;
        }
    }
    ctx->pc = 0x2C0F9Cu;
label_2c0f9c:
    // 0x2c0f9c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2c0f9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2c0fa0:
    // 0x2c0fa0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2c0fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0fa4: 0xc099d1c  jal         func_267470
    ctx->pc = 0x2C0FA4u;
    SET_GPR_U32(ctx, 31, 0x2C0FACu);
    ctx->pc = 0x267470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267470u, 0x2C0FA4u, 0x2C0FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0FACu;
label_2c0fac:
    // 0x2c0fac: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x2c0facu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c0fb0: 0x0  nop
    ctx->pc = 0x2c0fb0u;
    // NOP
    // 0x2c0fb4: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2C0FB4u;
    {
        const bool branch_taken_0x2c0fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c0fb4) {
            ctx->pc = 0x2C0F9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c0f9c;
        }
    }
    ctx->pc = 0x2C0FBCu;
    // 0x2c0fbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c0fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0fc0: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x2c0fc0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c0fc4: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C0FC4u;
    {
        const bool branch_taken_0x2c0fc4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0fc4) {
            ctx->pc = 0x2C0FECu;
            goto label_2c0fec;
        }
    }
    ctx->pc = 0x2C0FCCu;
    // 0x2c0fcc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2c0fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2c0fd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c0fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0fd4: 0xc0b04c8  jal         func_2C1320
    ctx->pc = 0x2C0FD4u;
    SET_GPR_U32(ctx, 31, 0x2C0FDCu);
    ctx->pc = 0x2C1320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1320u, 0x2C0FD4u, 0x2C0FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0FDCu;
label_2c0fdc:
    // 0x2c0fdc: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2c0fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2c0fe0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c0fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0fe4: 0xc0b04e0  jal         func_2C1380
    ctx->pc = 0x2C0FE4u;
    SET_GPR_U32(ctx, 31, 0x2C0FECu);
    ctx->pc = 0x2C1380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1380u, 0x2C0FE4u, 0x2C0FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0FECu;
label_2c0fec:
    // 0x2c0fec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2c0fecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2c0ff0:
    // 0x2c0ff0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2c0ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2c0ff4: 0xc0b04b0  jal         func_2C12C0
    ctx->pc = 0x2C0FF4u;
    SET_GPR_U32(ctx, 31, 0x2C0FFCu);
    ctx->pc = 0x2C12C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C12C0u, 0x2C0FF4u, 0x2C0FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0FFCu;
label_2c0ffc:
    // 0x2c0ffc: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2c0ffcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c1000: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x2C1000u;
    {
        const bool branch_taken_0x2c1000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c1000) {
            ctx->pc = 0x2C0F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c0f68;
        }
    }
    ctx->pc = 0x2C1008u;
    // 0x2c1008: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2C1008u;
    {
        const bool branch_taken_0x2c1008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1008) {
            ctx->pc = 0x2C1058u;
            goto label_2c1058;
        }
    }
    ctx->pc = 0x2C1010u;
label_2c1010:
    // 0x2c1010: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c1010u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1014: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2C1014u;
    {
        const bool branch_taken_0x2c1014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1014) {
            ctx->pc = 0x2C1040u;
            goto label_2c1040;
        }
    }
    ctx->pc = 0x2C101Cu;
label_2c101c:
    // 0x2c101c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2c101cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2c1020: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c1020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1024: 0xc0b04c8  jal         func_2C1320
    ctx->pc = 0x2C1024u;
    SET_GPR_U32(ctx, 31, 0x2C102Cu);
    ctx->pc = 0x2C1320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1320u, 0x2C1024u, 0x2C102Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C102Cu;
label_2c102c:
    // 0x2c102c: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2c102cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2c1030: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c1030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1034: 0xc0b04e0  jal         func_2C1380
    ctx->pc = 0x2C1034u;
    SET_GPR_U32(ctx, 31, 0x2C103Cu);
    ctx->pc = 0x2C1380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1380u, 0x2C1034u, 0x2C103Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C103Cu;
label_2c103c:
    // 0x2c103c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2c103cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2c1040:
    // 0x2c1040: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2c1040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2c1044: 0xc0b04b0  jal         func_2C12C0
    ctx->pc = 0x2C1044u;
    SET_GPR_U32(ctx, 31, 0x2C104Cu);
    ctx->pc = 0x2C12C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C12C0u, 0x2C1044u, 0x2C104Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C104Cu;
label_2c104c:
    // 0x2c104c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2c104cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c1050: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2C1050u;
    {
        const bool branch_taken_0x2c1050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c1050) {
            ctx->pc = 0x2C101Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c101c;
        }
    }
    ctx->pc = 0x2C1058u;
label_2c1058:
    // 0x2c1058: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2c1058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2c105c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2c105cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c1060: 0xc0b0428  jal         func_2C10A0
    ctx->pc = 0x2C1060u;
    SET_GPR_U32(ctx, 31, 0x2C1068u);
    ctx->pc = 0x2C10A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C10A0u, 0x2C1060u, 0x2C1068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1068u;
label_2c1068:
    // 0x2c1068: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2c1068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c106c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2c106cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c1070: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2c1070u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c1074: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2c1074u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c1078: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c1078u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c107c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c107cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c1080: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c1080u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c1084: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c1084u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1088: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c1088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c108c: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x2c108cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2c1090: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1098u;
    // 0x2c1098: 0x0  nop
    ctx->pc = 0x2c1098u;
    // NOP
    // 0x2c109c: 0x0  nop
    ctx->pc = 0x2c109cu;
    // NOP
    ctx->pc = 0x2c10a0u;
}
