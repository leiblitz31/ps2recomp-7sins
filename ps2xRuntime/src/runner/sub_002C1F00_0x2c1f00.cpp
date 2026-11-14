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

// Function: sub_002C1F00
// Address: 0x2c1f00 - 0x2c2030
void sub_002C1F00_0x2c1f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1F00_0x2c1f00");
#endif

    switch (ctx->pc) {
        case 0x2c1f34u: goto label_2c1f34;
        case 0x2c1f40u: goto label_2c1f40;
        case 0x2c1f58u: goto label_2c1f58;
        case 0x2c1f68u: goto label_2c1f68;
        case 0x2c1f80u: goto label_2c1f80;
        case 0x2c1fa4u: goto label_2c1fa4;
        case 0x2c1fc4u: goto label_2c1fc4;
        case 0x2c1fe4u: goto label_2c1fe4;
        case 0x2c1ffcu: goto label_2c1ffc;
        default: break;
    }

    ctx->pc = 0x2c1f00u;

    // 0x2c1f00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c1f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c1f04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c1f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c1f08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c1f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c1f0c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2c1f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2c1f10: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2c1f10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2c1f14: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2c1f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c1f18: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x2c1f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2c1f1c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C1F1Cu;
    {
        const bool branch_taken_0x2c1f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1f1c) {
            ctx->pc = 0x2C1F34u;
            goto label_2c1f34;
        }
    }
    ctx->pc = 0x2C1F24u;
    // 0x2c1f24: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2c1f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c1f28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c1f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1f2c: 0xc096e24  jal         func_25B890
    ctx->pc = 0x2C1F2Cu;
    SET_GPR_U32(ctx, 31, 0x2C1F34u);
    ctx->pc = 0x25B890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B890u, 0x2C1F2Cu, 0x2C1F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1F34u;
label_2c1f34:
    // 0x2c1f34: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2c1f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c1f38: 0xc096e30  jal         func_25B8C0
    ctx->pc = 0x2C1F38u;
    SET_GPR_U32(ctx, 31, 0x2C1F40u);
    ctx->pc = 0x25B8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8C0u, 0x2C1F38u, 0x2C1F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1F40u;
label_2c1f40:
    // 0x2c1f40: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C1F40u;
    {
        const bool branch_taken_0x2c1f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1f40) {
            ctx->pc = 0x2C1F74u;
            goto label_2c1f74;
        }
    }
    ctx->pc = 0x2C1F48u;
    // 0x2c1f48: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2c1f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c1f4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c1f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1f50: 0xc096e24  jal         func_25B890
    ctx->pc = 0x2C1F50u;
    SET_GPR_U32(ctx, 31, 0x2C1F58u);
    ctx->pc = 0x25B890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B890u, 0x2C1F50u, 0x2C1F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1F58u;
label_2c1f58:
    // 0x2c1f58: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2c1f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c1f5c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2c1f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c1f60: 0xc0b0a44  jal         func_2C2910
    ctx->pc = 0x2C1F60u;
    SET_GPR_U32(ctx, 31, 0x2C1F68u);
    ctx->pc = 0x2C2910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2910u, 0x2C1F60u, 0x2C1F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1F68u;
label_2c1f68:
    // 0x2c1f68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c1f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1f6c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2C1F6Cu;
    {
        const bool branch_taken_0x2c1f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1f6c) {
            ctx->pc = 0x2C2014u;
            goto label_2c2014;
        }
    }
    ctx->pc = 0x2C1F74u;
label_2c1f74:
    // 0x2c1f74: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2c1f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c1f78: 0xc096d84  jal         func_25B610
    ctx->pc = 0x2C1F78u;
    SET_GPR_U32(ctx, 31, 0x2C1F80u);
    ctx->pc = 0x25B610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B610u, 0x2C1F78u, 0x2C1F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1F80u;
label_2c1f80:
    // 0x2c1f80: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C1F80u;
    {
        const bool branch_taken_0x2c1f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1f80) {
            ctx->pc = 0x2C1FB0u;
            goto label_2c1fb0;
        }
    }
    ctx->pc = 0x2C1F88u;
    // 0x2c1f88: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2c1f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c1f8c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2c1f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c1f90: 0x8c640044  lw          $a0, 0x44($v1)
    ctx->pc = 0x2c1f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x2c1f94: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2c1f94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c1f98: 0x24460084  addiu       $a2, $v0, 0x84
    ctx->pc = 0x2c1f98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x2c1f9c: 0xc0b3808  jal         func_2CE020
    ctx->pc = 0x2C1F9Cu;
    SET_GPR_U32(ctx, 31, 0x2C1FA4u);
    ctx->pc = 0x2CE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE020u, 0x2C1F9Cu, 0x2C1FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1FA4u;
label_2c1fa4:
    // 0x2c1fa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c1fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1fa8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2C1FA8u;
    {
        const bool branch_taken_0x2c1fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1fa8) {
            ctx->pc = 0x2C2014u;
            goto label_2c2014;
        }
    }
    ctx->pc = 0x2C1FB0u;
label_2c1fb0:
    // 0x2c1fb0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2c1fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c1fb4: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x2c1fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x2c1fb8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2c1fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c1fbc: 0xc0b33e8  jal         func_2CCFA0
    ctx->pc = 0x2C1FBCu;
    SET_GPR_U32(ctx, 31, 0x2C1FC4u);
    ctx->pc = 0x2CCFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCFA0u, 0x2C1FBCu, 0x2C1FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1FC4u;
label_2c1fc4:
    // 0x2c1fc4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C1FC4u;
    {
        const bool branch_taken_0x2c1fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1fc4) {
            ctx->pc = 0x2C1FD8u;
            goto label_2c1fd8;
        }
    }
    ctx->pc = 0x2C1FCCu;
    // 0x2c1fcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c1fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1fd0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2C1FD0u;
    {
        const bool branch_taken_0x2c1fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1fd0) {
            ctx->pc = 0x2C2014u;
            goto label_2c2014;
        }
    }
    ctx->pc = 0x2C1FD8u;
label_2c1fd8:
    // 0x2c1fd8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2c1fd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1fdc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C1FDCu;
    {
        const bool branch_taken_0x2c1fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1fdc) {
            ctx->pc = 0x2C1FE8u;
            goto label_2c1fe8;
        }
    }
    ctx->pc = 0x2C1FE4u;
label_2c1fe4:
    // 0x2c1fe4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2c1fe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2c1fe8:
    // 0x2c1fe8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2c1fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c1fec: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x2c1fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x2c1ff0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2c1ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c1ff4: 0xc0b33e8  jal         func_2CCFA0
    ctx->pc = 0x2C1FF4u;
    SET_GPR_U32(ctx, 31, 0x2C1FFCu);
    ctx->pc = 0x2CCFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCFA0u, 0x2C1FF4u, 0x2C1FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1FFCu;
label_2c1ffc:
    // 0x2c1ffc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C1FFCu;
    {
        const bool branch_taken_0x2c1ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c1ffc) {
            ctx->pc = 0x2C2010u;
            goto label_2c2010;
        }
    }
    ctx->pc = 0x2C2004u;
    // 0x2c2004: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x2c2004u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2c2008: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2C2008u;
    {
        const bool branch_taken_0x2c2008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2008) {
            ctx->pc = 0x2C1FE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c1fe4;
        }
    }
    ctx->pc = 0x2C2010u;
label_2c2010:
    // 0x2c2010: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x2c2010u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_2c2014:
    // 0x2c2014: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c2014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c2018: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c2018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c201c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2c201cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c2020: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2028u;
    // 0x2c2028: 0x0  nop
    ctx->pc = 0x2c2028u;
    // NOP
    // 0x2c202c: 0x0  nop
    ctx->pc = 0x2c202cu;
    // NOP
    ctx->pc = 0x2c2030u;
}
