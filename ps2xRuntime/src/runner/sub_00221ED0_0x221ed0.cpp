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

// Function: sub_00221ED0
// Address: 0x221ed0 - 0x222070
void sub_00221ED0_0x221ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221ED0_0x221ed0");
#endif

    switch (ctx->pc) {
        case 0x221f14u: goto label_221f14;
        case 0x221f24u: goto label_221f24;
        case 0x221f38u: goto label_221f38;
        case 0x221f48u: goto label_221f48;
        case 0x221f60u: goto label_221f60;
        case 0x221f80u: goto label_221f80;
        case 0x221f8cu: goto label_221f8c;
        case 0x221fa4u: goto label_221fa4;
        case 0x221fb0u: goto label_221fb0;
        case 0x221fc8u: goto label_221fc8;
        case 0x221fe0u: goto label_221fe0;
        case 0x222000u: goto label_222000;
        case 0x222010u: goto label_222010;
        case 0x222028u: goto label_222028;
        case 0x222048u: goto label_222048;
        default: break;
    }

    ctx->pc = 0x221ed0u;

    // 0x221ed0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x221ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x221ed4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x221ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x221ed8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x221ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x221edc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x221edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x221ee0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x221ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x221ee4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x221ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x221ee8: 0xa7a50050  sh          $a1, 0x50($sp)
    ctx->pc = 0x221ee8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 80), (uint16_t)GPR_U32(ctx, 5));
    // 0x221eec: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x221eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x221ef0: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x221EF0u;
    {
        const bool branch_taken_0x221ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221ef0) {
            ctx->pc = 0x222048u;
            goto label_222048;
        }
    }
    ctx->pc = 0x221EF8u;
    // 0x221ef8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x221ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x221efc: 0x246352a0  addiu       $v1, $v1, 0x52A0
    ctx->pc = 0x221efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21152));
    // 0x221f00: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x221f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x221f04: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x221f04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x221f08: 0x8f84bb7c  lw          $a0, -0x4484($gp)
    ctx->pc = 0x221f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949756)));
    // 0x221f0c: 0xc0888ac  jal         func_2222B0
    ctx->pc = 0x221F0Cu;
    SET_GPR_U32(ctx, 31, 0x221F14u);
    ctx->pc = 0x2222B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2222B0u, 0x221F0Cu, 0x221F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221F14u;
label_221f14:
    // 0x221f14: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x221f14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f18: 0x8f84bb7c  lw          $a0, -0x4484($gp)
    ctx->pc = 0x221f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949756)));
    // 0x221f1c: 0xc0888a4  jal         func_222290
    ctx->pc = 0x221F1Cu;
    SET_GPR_U32(ctx, 31, 0x221F24u);
    ctx->pc = 0x222290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222290u, 0x221F1Cu, 0x221F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221F24u;
label_221f24:
    // 0x221f24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x221f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x221f28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f2c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x221f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x221f30: 0xc089594  jal         func_225650
    ctx->pc = 0x221F30u;
    SET_GPR_U32(ctx, 31, 0x221F38u);
    ctx->pc = 0x225650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225650u, 0x221F30u, 0x221F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221F38u;
label_221f38:
    // 0x221f38: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x221f38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f3c: 0x8f84bb7c  lw          $a0, -0x4484($gp)
    ctx->pc = 0x221f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949756)));
    // 0x221f40: 0xc0888a4  jal         func_222290
    ctx->pc = 0x221F40u;
    SET_GPR_U32(ctx, 31, 0x221F48u);
    ctx->pc = 0x222290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222290u, 0x221F40u, 0x221F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221F48u;
label_221f48:
    // 0x221f48: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x221F48u;
    {
        const bool branch_taken_0x221f48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x221f48) {
            ctx->pc = 0x221F60u;
            goto label_221f60;
        }
    }
    ctx->pc = 0x221F50u;
    // 0x221f50: 0x8f84bb7c  lw          $a0, -0x4484($gp)
    ctx->pc = 0x221f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949756)));
    // 0x221f54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x221f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f58: 0xc088868  jal         func_2221A0
    ctx->pc = 0x221F58u;
    SET_GPR_U32(ctx, 31, 0x221F60u);
    ctx->pc = 0x2221A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2221A0u, 0x221F58u, 0x221F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221F60u;
label_221f60:
    // 0x221f60: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x221f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x221f64: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x221f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x221f68: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x221F68u;
    {
        const bool branch_taken_0x221f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221f68) {
            ctx->pc = 0x221FE0u;
            goto label_221fe0;
        }
    }
    ctx->pc = 0x221F70u;
    // 0x221f70: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x221f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x221f74: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x221f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x221f78: 0xc088708  jal         func_221C20
    ctx->pc = 0x221F78u;
    SET_GPR_U32(ctx, 31, 0x221F80u);
    ctx->pc = 0x221C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C20u, 0x221F78u, 0x221F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221F80u;
label_221f80:
    // 0x221f80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x221f80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f84: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x221F84u;
    {
        const bool branch_taken_0x221f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x221f84) {
            ctx->pc = 0x221FB8u;
            goto label_221fb8;
        }
    }
    ctx->pc = 0x221F8Cu;
label_221f8c:
    // 0x221f8c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x221f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x221f90: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x221F90u;
    {
        const bool branch_taken_0x221f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221f90) {
            ctx->pc = 0x221FB4u;
            goto label_221fb4;
        }
    }
    ctx->pc = 0x221F98u;
    // 0x221f98: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x221f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x221f9c: 0xc088840  jal         func_222100
    ctx->pc = 0x221F9Cu;
    SET_GPR_U32(ctx, 31, 0x221FA4u);
    ctx->pc = 0x222100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222100u, 0x221F9Cu, 0x221FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221FA4u;
label_221fa4:
    // 0x221fa4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x221fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x221fa8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x221FA8u;
    SET_GPR_U32(ctx, 31, 0x221FB0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x221FA8u, 0x221FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221FB0u;
label_221fb0:
    // 0x221fb0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x221fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_221fb4:
    // 0x221fb4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x221fb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_221fb8:
    // 0x221fb8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x221fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x221fbc: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x221fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x221fc0: 0xc088700  jal         func_221C00
    ctx->pc = 0x221FC0u;
    SET_GPR_U32(ctx, 31, 0x221FC8u);
    ctx->pc = 0x221C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C00u, 0x221FC0u, 0x221FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221FC8u;
label_221fc8:
    // 0x221fc8: 0x1602fff0  bne         $s0, $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x221FC8u;
    {
        const bool branch_taken_0x221fc8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x221fc8) {
            ctx->pc = 0x221F8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_221f8c;
        }
    }
    ctx->pc = 0x221FD0u;
    // 0x221fd0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x221fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x221fd4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x221fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x221fd8: 0xc088698  jal         func_221A60
    ctx->pc = 0x221FD8u;
    SET_GPR_U32(ctx, 31, 0x221FE0u);
    ctx->pc = 0x221A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221A60u, 0x221FD8u, 0x221FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221FE0u;
label_221fe0:
    // 0x221fe0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x221fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x221fe4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x221fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x221fe8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x221FE8u;
    {
        const bool branch_taken_0x221fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221fe8) {
            ctx->pc = 0x222018u;
            goto label_222018;
        }
    }
    ctx->pc = 0x221FF0u;
    // 0x221ff0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x221ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x221ff4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x221ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x221ff8: 0xc08881c  jal         func_222070
    ctx->pc = 0x221FF8u;
    SET_GPR_U32(ctx, 31, 0x222000u);
    ctx->pc = 0x222070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222070u, 0x221FF8u, 0x222000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222000u;
label_222000:
    // 0x222000: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x222000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x222004: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x222004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x222008: 0xc119c5c  jal         func_467170
    ctx->pc = 0x222008u;
    SET_GPR_U32(ctx, 31, 0x222010u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x222008u, 0x222010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222010u;
label_222010:
    // 0x222010: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x222010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x222014: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x222014u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_222018:
    // 0x222018: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x222018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22201c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22201cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222020: 0xc0861a0  jal         func_218680
    ctx->pc = 0x222020u;
    SET_GPR_U32(ctx, 31, 0x222028u);
    ctx->pc = 0x218680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218680u, 0x222020u, 0x222028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222028u;
label_222028:
    // 0x222028: 0x87a20050  lh          $v0, 0x50($sp)
    ctx->pc = 0x222028u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22202c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x22202cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x222030: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x222030u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x222034: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x222034u;
    {
        const bool branch_taken_0x222034 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x222034) {
            ctx->pc = 0x222048u;
            goto label_222048;
        }
    }
    ctx->pc = 0x22203Cu;
    // 0x22203c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x22203cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x222040: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x222040u;
    SET_GPR_U32(ctx, 31, 0x222048u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x222040u, 0x222048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222048u;
label_222048:
    // 0x222048: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x222048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22204c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22204cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x222050: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x222050u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x222054: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x222054u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222058: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x222058u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22205c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x22205cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x222060: 0x3e00008  jr          $ra
    ctx->pc = 0x222060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222068u;
    // 0x222068: 0x0  nop
    ctx->pc = 0x222068u;
    // NOP
    // 0x22206c: 0x0  nop
    ctx->pc = 0x22206cu;
    // NOP
    ctx->pc = 0x222070u;
}
