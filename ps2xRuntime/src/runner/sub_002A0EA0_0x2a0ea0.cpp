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

// Function: sub_002A0EA0
// Address: 0x2a0ea0 - 0x2a10e0
void sub_002A0EA0_0x2a0ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0EA0_0x2a0ea0");
#endif

    switch (ctx->pc) {
        case 0x2a0f28u: goto label_2a0f28;
        case 0x2a0f4cu: goto label_2a0f4c;
        case 0x2a0f78u: goto label_2a0f78;
        case 0x2a0f90u: goto label_2a0f90;
        case 0x2a0fc0u: goto label_2a0fc0;
        case 0x2a0fd0u: goto label_2a0fd0;
        case 0x2a1024u: goto label_2a1024;
        case 0x2a1048u: goto label_2a1048;
        case 0x2a1060u: goto label_2a1060;
        case 0x2a106cu: goto label_2a106c;
        case 0x2a1098u: goto label_2a1098;
        default: break;
    }

    ctx->pc = 0x2a0ea0u;

    // 0x2a0ea0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2a0ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2a0ea4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2a0ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2a0ea8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a0ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a0eac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a0eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a0eb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a0eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a0eb4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x2a0eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x2a0eb8: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x2a0eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x2a0ebc: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x2a0ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x2a0ec0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2a0ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a0ec4: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x2a0ec4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a0ec8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0EC8u;
    {
        const bool branch_taken_0x2a0ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0ec8) {
            ctx->pc = 0x2A0EDCu;
            goto label_2a0edc;
        }
    }
    ctx->pc = 0x2A0ED0u;
    // 0x2a0ed0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a0ed0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0ed4: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x2A0ED4u;
    {
        const bool branch_taken_0x2a0ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0ed4) {
            ctx->pc = 0x2A10C0u;
            goto label_2a10c0;
        }
    }
    ctx->pc = 0x2A0EDCu;
label_2a0edc:
    // 0x2a0edc: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2a0edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a0ee0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2a0ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2a0ee4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a0ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a0ee8: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2a0ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a0eec: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2a0eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a0ef0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a0ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a0ef4: 0x8c4201c4  lw          $v0, 0x1C4($v0)
    ctx->pc = 0x2a0ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 452)));
    // 0x2a0ef8: 0x10020010  beq         $zero, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A0EF8u;
    {
        const bool branch_taken_0x2a0ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a0ef8) {
            ctx->pc = 0x2A0F3Cu;
            goto label_2a0f3c;
        }
    }
    ctx->pc = 0x2A0F00u;
    // 0x2a0f00: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2a0f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a0f04: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2a0f04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2a0f08: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a0f08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a0f0c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2a0f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a0f10: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2a0f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a0f14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a0f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a0f18: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2a0f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a0f1c: 0x244501c8  addiu       $a1, $v0, 0x1C8
    ctx->pc = 0x2a0f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 456));
    // 0x2a0f20: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x2A0F20u;
    SET_GPR_U32(ctx, 31, 0x2A0F28u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x2A0F20u, 0x2A0F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0F28u;
label_2a0f28:
    // 0x2a0f28: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0F28u;
    {
        const bool branch_taken_0x2a0f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0f28) {
            ctx->pc = 0x2A0F3Cu;
            goto label_2a0f3c;
        }
    }
    ctx->pc = 0x2A0F30u;
    // 0x2a0f30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a0f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0f34: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x2A0F34u;
    {
        const bool branch_taken_0x2a0f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0f34) {
            ctx->pc = 0x2A10C0u;
            goto label_2a10c0;
        }
    }
    ctx->pc = 0x2A0F3Cu;
label_2a0f3c:
    // 0x2a0f3c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2a0f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a0f40: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x2a0f40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a0f44: 0xc0a8438  jal         func_2A10E0
    ctx->pc = 0x2A0F44u;
    SET_GPR_U32(ctx, 31, 0x2A0F4Cu);
    ctx->pc = 0x2A10E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A10E0u, 0x2A0F44u, 0x2A0F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0F4Cu;
label_2a0f4c:
    // 0x2a0f4c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2a0f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a0f50: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2a0f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2a0f54: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a0f54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a0f58: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2a0f58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a0f5c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2a0f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a0f60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a0f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a0f64: 0x244401c8  addiu       $a0, $v0, 0x1C8
    ctx->pc = 0x2a0f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 456));
    // 0x2a0f68: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x2a0f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a0f6c: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x2a0f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a0f70: 0xc0bc77e  jal         func_2F1DF8
    ctx->pc = 0x2A0F70u;
    SET_GPR_U32(ctx, 31, 0x2A0F78u);
    ctx->pc = 0x2F1DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DF8u, 0x2A0F70u, 0x2A0F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0F78u;
label_2a0f78:
    // 0x2a0f78: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x2a0f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
    // 0x2a0f7c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x2a0f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a0f80: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2a0f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a0f84: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a0f84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0f88: 0xc08a320  jal         func_228C80
    ctx->pc = 0x2A0F88u;
    SET_GPR_U32(ctx, 31, 0x2A0F90u);
    ctx->pc = 0x228C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228C80u, 0x2A0F88u, 0x2A0F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0F90u;
label_2a0f90:
    // 0x2a0f90: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2a0f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a0f94: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2a0f94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2a0f98: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2a0f98u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a0f9c: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x2a0f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2a0fa0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2a0fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a0fa4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a0fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a0fa8: 0xac6201c4  sw          $v0, 0x1C4($v1)
    ctx->pc = 0x2a0fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 452), GPR_U32(ctx, 2));
    // 0x2a0fac: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2a0facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a0fb0: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2a0fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2a0fb4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2a0fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2a0fb8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2A0FB8u;
    SET_GPR_U32(ctx, 31, 0x2A0FC0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2A0FB8u, 0x2A0FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0FC0u;
label_2a0fc0:
    // 0x2a0fc0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a0fc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0fc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a0fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0fc8: 0xc096950  jal         func_25A540
    ctx->pc = 0x2A0FC8u;
    SET_GPR_U32(ctx, 31, 0x2A0FD0u);
    ctx->pc = 0x25A540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A540u, 0x2A0FC8u, 0x2A0FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0FD0u;
label_2a0fd0:
    // 0x2a0fd0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a0fd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0fd4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2a0fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a0fd8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2a0fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2a0fdc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a0fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a0fe0: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2a0fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a0fe4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2a0fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a0fe8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a0fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a0fec: 0x8c4201c0  lw          $v0, 0x1C0($v0)
    ctx->pc = 0x2a0fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 448)));
    // 0x2a0ff0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2A0FF0u;
    {
        const bool branch_taken_0x2a0ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0ff0) {
            ctx->pc = 0x2A1024u;
            goto label_2a1024;
        }
    }
    ctx->pc = 0x2A0FF8u;
    // 0x2a0ff8: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2a0ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a0ffc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2a0ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2a1000: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a1000u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a1004: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2a1004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a1008: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2a1008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a100c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a100cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a1010: 0x244401c0  addiu       $a0, $v0, 0x1C0
    ctx->pc = 0x2a1010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
    // 0x2a1014: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a1014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1018: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x2a1018u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a101c: 0xc0a79c0  jal         func_29E700
    ctx->pc = 0x2A101Cu;
    SET_GPR_U32(ctx, 31, 0x2A1024u);
    ctx->pc = 0x29E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E700u, 0x2A101Cu, 0x2A1024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1024u;
label_2a1024:
    // 0x2a1024: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2a1024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a1028: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2a1028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2a102c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a102cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a1030: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2a1030u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a1034: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2a1034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a1038: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a1038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a103c: 0x8c4401c4  lw          $a0, 0x1C4($v0)
    ctx->pc = 0x2a103cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 452)));
    // 0x2a1040: 0xc0e6f1a  jal         func_39BC68
    ctx->pc = 0x2A1040u;
    SET_GPR_U32(ctx, 31, 0x2A1048u);
    ctx->pc = 0x39BC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BC68u, 0x2A1040u, 0x2A1048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1048u;
label_2a1048:
    // 0x2a1048: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2A1048u;
    {
        const bool branch_taken_0x2a1048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a1048) {
            ctx->pc = 0x2A1098u;
            goto label_2a1098;
        }
    }
    ctx->pc = 0x2A1050u;
    // 0x2a1050: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2a1050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a1054: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x2a1054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2a1058: 0xc121d18  jal         func_487460
    ctx->pc = 0x2A1058u;
    SET_GPR_U32(ctx, 31, 0x2A1060u);
    ctx->pc = 0x487460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487460u, 0x2A1058u, 0x2A1060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1060u;
label_2a1060:
    // 0x2a1060: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a1060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1064: 0xc0e6f1a  jal         func_39BC68
    ctx->pc = 0x2A1064u;
    SET_GPR_U32(ctx, 31, 0x2A106Cu);
    ctx->pc = 0x39BC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BC68u, 0x2A1064u, 0x2A106Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A106Cu;
label_2a106c:
    // 0x2a106c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a106cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1070: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2a1070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a1074: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2a1074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2a1078: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a1078u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a107c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2a107cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a1080: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2a1080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a1084: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a1084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a1088: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a1088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a108c: 0x8c4501c4  lw          $a1, 0x1C4($v0)
    ctx->pc = 0x2a108cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 452)));
    // 0x2a1090: 0xc0e6ea6  jal         func_39BA98
    ctx->pc = 0x2A1090u;
    SET_GPR_U32(ctx, 31, 0x2A1098u);
    ctx->pc = 0x39BA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BA98u, 0x2A1090u, 0x2A1098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1098u;
label_2a1098:
    // 0x2a1098: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2a1098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a109c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2a109cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2a10a0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a10a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a10a4: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2a10a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a10a8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2a10a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a10ac: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2a10acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a10b0: 0x8c6201c0  lw          $v0, 0x1C0($v1)
    ctx->pc = 0x2a10b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 448)));
    // 0x2a10b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a10b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a10b8: 0xac6201c0  sw          $v0, 0x1C0($v1)
    ctx->pc = 0x2a10b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 448), GPR_U32(ctx, 2));
    // 0x2a10bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a10bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a10c0:
    // 0x2a10c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a10c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a10c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a10c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a10c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a10c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a10cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a10ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a10d0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2a10d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a10d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A10D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A10D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A10DCu;
    // 0x2a10dc: 0x0  nop
    ctx->pc = 0x2a10dcu;
    // NOP
    ctx->pc = 0x2a10e0u;
}
