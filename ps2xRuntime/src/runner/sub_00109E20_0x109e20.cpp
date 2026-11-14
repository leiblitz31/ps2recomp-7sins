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

// Function: sub_00109E20
// Address: 0x109e20 - 0x10a030
void sub_00109E20_0x109e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109E20_0x109e20");
#endif

    switch (ctx->pc) {
        case 0x109e90u: goto label_109e90;
        case 0x109ea0u: goto label_109ea0;
        case 0x109eb8u: goto label_109eb8;
        case 0x109ed0u: goto label_109ed0;
        case 0x109ee0u: goto label_109ee0;
        case 0x109f00u: goto label_109f00;
        case 0x109f10u: goto label_109f10;
        case 0x109f28u: goto label_109f28;
        case 0x109f40u: goto label_109f40;
        case 0x109f5cu: goto label_109f5c;
        case 0x109f6cu: goto label_109f6c;
        case 0x109f7cu: goto label_109f7c;
        case 0x109f94u: goto label_109f94;
        case 0x109fa4u: goto label_109fa4;
        case 0x109fb4u: goto label_109fb4;
        case 0x109fc4u: goto label_109fc4;
        case 0x109fe0u: goto label_109fe0;
        case 0x10a000u: goto label_10a000;
        default: break;
    }

    ctx->pc = 0x109e20u;

    // 0x109e20: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x109e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x109e24: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x109e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x109e28: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x109e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x109e2c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x109e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x109e30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x109e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x109e34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x109e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x109e38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x109e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x109e3c: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x109e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x109e40: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x109e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x109e44: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x109e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x109e48: 0xafa700a0  sw          $a3, 0xA0($sp)
    ctx->pc = 0x109e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 7));
    // 0x109e4c: 0xafa800b0  sw          $t0, 0xB0($sp)
    ctx->pc = 0x109e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 8));
    // 0x109e50: 0xafa900c0  sw          $t1, 0xC0($sp)
    ctx->pc = 0x109e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 9));
    // 0x109e54: 0x8fb300c0  lw          $s3, 0xC0($sp)
    ctx->pc = 0x109e54u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x109e58: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x109e58u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x109e5c: 0x8fb100a0  lw          $s1, 0xA0($sp)
    ctx->pc = 0x109e5cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x109e60: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x109e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x109e64: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x109e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x109e68: 0x12220015  beq         $s1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x109E68u;
    {
        const bool branch_taken_0x109e68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x109e68) {
            ctx->pc = 0x109EC0u;
            goto label_109ec0;
        }
    }
    ctx->pc = 0x109E70u;
    // 0x109e70: 0x16600036  bnez        $s3, . + 4 + (0x36 << 2)
    ctx->pc = 0x109E70u;
    {
        const bool branch_taken_0x109e70 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x109e70) {
            ctx->pc = 0x109F4Cu;
            goto label_109f4c;
        }
    }
    ctx->pc = 0x109E78u;
    // 0x109e78: 0x16400011  bnez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x109E78u;
    {
        const bool branch_taken_0x109e78 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x109e78) {
            ctx->pc = 0x109EC0u;
            goto label_109ec0;
        }
    }
    ctx->pc = 0x109E80u;
    // 0x109e80: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x109e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x109e84: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x109e84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x109e88: 0xc0426fc  jal         func_109BF0
    ctx->pc = 0x109E88u;
    SET_GPR_U32(ctx, 31, 0x109E90u);
    ctx->pc = 0x109BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109BF0u, 0x109E88u, 0x109E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109E90u;
label_109e90:
    // 0x109e90: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x109e90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109e94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109e98: 0xc0426ec  jal         func_109BB0
    ctx->pc = 0x109E98u;
    SET_GPR_U32(ctx, 31, 0x109EA0u);
    ctx->pc = 0x109BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109BB0u, 0x109E98u, 0x109EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109EA0u;
label_109ea0:
    // 0x109ea0: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x109ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x109ea4: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x109ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x109ea8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x109ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109eac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x109eacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109eb0: 0xc0426d8  jal         func_109B60
    ctx->pc = 0x109EB0u;
    SET_GPR_U32(ctx, 31, 0x109EB8u);
    ctx->pc = 0x109B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B60u, 0x109EB0u, 0x109EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109EB8u;
label_109eb8:
    // 0x109eb8: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x109EB8u;
    {
        const bool branch_taken_0x109eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x109eb8) {
            ctx->pc = 0x109F4Cu;
            goto label_109f4c;
        }
    }
    ctx->pc = 0x109EC0u;
label_109ec0:
    // 0x109ec0: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x109ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x109ec4: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x109ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x109ec8: 0xc042814  jal         func_10A050
    ctx->pc = 0x109EC8u;
    SET_GPR_U32(ctx, 31, 0x109ED0u);
    ctx->pc = 0x10A050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A050u, 0x109EC8u, 0x109ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109ED0u;
label_109ed0:
    // 0x109ed0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x109ed0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ed4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ed8: 0xc0426d0  jal         func_109B40
    ctx->pc = 0x109ED8u;
    SET_GPR_U32(ctx, 31, 0x109EE0u);
    ctx->pc = 0x109B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B40u, 0x109ED8u, 0x109EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109EE0u;
label_109ee0:
    // 0x109ee0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x109ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x109ee4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x109ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x109ee8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x109ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x109eec: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x109EECu;
    {
        const bool branch_taken_0x109eec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x109eec) {
            ctx->pc = 0x109F1Cu;
            goto label_109f1c;
        }
    }
    ctx->pc = 0x109EF4u;
    // 0x109ef4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x109ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x109ef8: 0xc04186c  jal         func_1061B0
    ctx->pc = 0x109EF8u;
    SET_GPR_U32(ctx, 31, 0x109F00u);
    ctx->pc = 0x1061B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061B0u, 0x109EF8u, 0x109F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109F00u;
label_109f00:
    // 0x109f00: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x109f00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x109f04: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x109f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x109f08: 0xc04185c  jal         func_106170
    ctx->pc = 0x109F08u;
    SET_GPR_U32(ctx, 31, 0x109F10u);
    ctx->pc = 0x106170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106170u, 0x109F08u, 0x109F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109F10u;
label_109f10:
    // 0x109f10: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x109f10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x109f14: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x109F14u;
    {
        const bool branch_taken_0x109f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109f14) {
            ctx->pc = 0x109F98u;
            goto label_109f98;
        }
    }
    ctx->pc = 0x109F1Cu;
label_109f1c:
    // 0x109f1c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x109f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x109f20: 0xc041864  jal         func_106190
    ctx->pc = 0x109F20u;
    SET_GPR_U32(ctx, 31, 0x109F28u);
    ctx->pc = 0x106190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106190u, 0x109F20u, 0x109F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109F28u;
label_109f28:
    // 0x109f28: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x109f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x109f2c: 0x1622001a  bne         $s1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x109F2Cu;
    {
        const bool branch_taken_0x109f2c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x109f2c) {
            ctx->pc = 0x109F98u;
            goto label_109f98;
        }
    }
    ctx->pc = 0x109F34u;
    // 0x109f34: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x109f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x109f38: 0xc041864  jal         func_106190
    ctx->pc = 0x109F38u;
    SET_GPR_U32(ctx, 31, 0x109F40u);
    ctx->pc = 0x106190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106190u, 0x109F38u, 0x109F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109F40u;
label_109f40:
    // 0x109f40: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x109f40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x109f44: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x109F44u;
    {
        const bool branch_taken_0x109f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109f44) {
            ctx->pc = 0x109F98u;
            goto label_109f98;
        }
    }
    ctx->pc = 0x109F4Cu;
label_109f4c:
    // 0x109f4c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x109f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x109f50: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x109f50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x109f54: 0xc042814  jal         func_10A050
    ctx->pc = 0x109F54u;
    SET_GPR_U32(ctx, 31, 0x109F5Cu);
    ctx->pc = 0x10A050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A050u, 0x109F54u, 0x109F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109F5Cu;
label_109f5c:
    // 0x109f5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x109f5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109f60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109f64: 0xc0426c8  jal         func_109B20
    ctx->pc = 0x109F64u;
    SET_GPR_U32(ctx, 31, 0x109F6Cu);
    ctx->pc = 0x109B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B20u, 0x109F64u, 0x109F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109F6Cu;
label_109f6c:
    // 0x109f6c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x109f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x109f70: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x109f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x109f74: 0xc04185c  jal         func_106170
    ctx->pc = 0x109F74u;
    SET_GPR_U32(ctx, 31, 0x109F7Cu);
    ctx->pc = 0x106170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106170u, 0x109F74u, 0x109F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109F7Cu;
label_109f7c:
    // 0x109f7c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x109f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x109f80: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x109F80u;
    {
        const bool branch_taken_0x109f80 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x109f80) {
            ctx->pc = 0x109F98u;
            goto label_109f98;
        }
    }
    ctx->pc = 0x109F88u;
    // 0x109f88: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x109f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x109f8c: 0xc04185c  jal         func_106170
    ctx->pc = 0x109F8Cu;
    SET_GPR_U32(ctx, 31, 0x109F94u);
    ctx->pc = 0x106170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106170u, 0x109F8Cu, 0x109F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109F94u;
label_109f94:
    // 0x109f94: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x109f94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_109f98:
    // 0x109f98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109f9c: 0xc04280c  jal         func_10A030
    ctx->pc = 0x109F9Cu;
    SET_GPR_U32(ctx, 31, 0x109FA4u);
    ctx->pc = 0x10A030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A030u, 0x109F9Cu, 0x109FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109FA4u;
label_109fa4:
    // 0x109fa4: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x109fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x109fa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109fac: 0xc0426d0  jal         func_109B40
    ctx->pc = 0x109FACu;
    SET_GPR_U32(ctx, 31, 0x109FB4u);
    ctx->pc = 0x109B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B40u, 0x109FACu, 0x109FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109FB4u;
label_109fb4:
    // 0x109fb4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x109fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x109fb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109fbc: 0xc0426c8  jal         func_109B20
    ctx->pc = 0x109FBCu;
    SET_GPR_U32(ctx, 31, 0x109FC4u);
    ctx->pc = 0x109B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B20u, 0x109FBCu, 0x109FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109FC4u;
label_109fc4:
    // 0x109fc4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x109fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x109fc8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x109fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x109fcc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x109fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x109fd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109fd4: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x109fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x109fd8: 0xc042858  jal         func_10A160
    ctx->pc = 0x109FD8u;
    SET_GPR_U32(ctx, 31, 0x109FE0u);
    ctx->pc = 0x10A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A160u, 0x109FD8u, 0x109FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109FE0u;
label_109fe0:
    // 0x109fe0: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x109fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x109fe4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x109fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x109fe8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x109fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x109fec: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x109fecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x109ff0: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x109ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x109ff4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x109ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ff8: 0xc0426bc  jal         func_109AF0
    ctx->pc = 0x109FF8u;
    SET_GPR_U32(ctx, 31, 0x10A000u);
    ctx->pc = 0x109AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109AF0u, 0x109FF8u, 0x10A000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A000u;
label_10a000:
    // 0x10a000: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x10a000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10a004: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x10a004u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10a008: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x10a008u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10a00c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10a00cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a010: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10a010u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a014: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10a014u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a018: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x10a018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x10a01c: 0x3e00008  jr          $ra
    ctx->pc = 0x10A01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A01Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A024u;
    // 0x10a024: 0x0  nop
    ctx->pc = 0x10a024u;
    // NOP
    // 0x10a028: 0x0  nop
    ctx->pc = 0x10a028u;
    // NOP
    // 0x10a02c: 0x0  nop
    ctx->pc = 0x10a02cu;
    // NOP
    ctx->pc = 0x10a030u;
}
