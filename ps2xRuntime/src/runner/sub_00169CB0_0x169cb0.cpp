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

// Function: sub_00169CB0
// Address: 0x169cb0 - 0x16a090
void sub_00169CB0_0x169cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169CB0_0x169cb0");
#endif

    switch (ctx->pc) {
        case 0x169cd0u: goto label_169cd0;
        case 0x169ce8u: goto label_169ce8;
        case 0x169d00u: goto label_169d00;
        case 0x169d30u: goto label_169d30;
        case 0x169d58u: goto label_169d58;
        case 0x169dc8u: goto label_169dc8;
        case 0x169df8u: goto label_169df8;
        case 0x169e20u: goto label_169e20;
        case 0x169e6cu: goto label_169e6c;
        case 0x169ec0u: goto label_169ec0;
        case 0x169ee4u: goto label_169ee4;
        case 0x169f00u: goto label_169f00;
        case 0x169f14u: goto label_169f14;
        case 0x169f24u: goto label_169f24;
        case 0x169f4cu: goto label_169f4c;
        case 0x169f60u: goto label_169f60;
        case 0x169f70u: goto label_169f70;
        case 0x169f98u: goto label_169f98;
        case 0x169fb0u: goto label_169fb0;
        case 0x169fc0u: goto label_169fc0;
        case 0x169fe8u: goto label_169fe8;
        case 0x16a000u: goto label_16a000;
        case 0x16a010u: goto label_16a010;
        case 0x16a038u: goto label_16a038;
        case 0x16a078u: goto label_16a078;
        default: break;
    }

    ctx->pc = 0x169cb0u;

    // 0x169cb0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x169cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x169cb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x169cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x169cb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x169cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x169cbc: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x169cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x169cc0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x169cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x169cc4: 0x27858f00  addiu       $a1, $gp, -0x7100
    ctx->pc = 0x169cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938368));
    // 0x169cc8: 0xc05621c  jal         func_158870
    ctx->pc = 0x169CC8u;
    SET_GPR_U32(ctx, 31, 0x169CD0u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x169CC8u, 0x169CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169CD0u;
label_169cd0:
    // 0x169cd0: 0xaf82bac0  sw          $v0, -0x4540($gp)
    ctx->pc = 0x169cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949568), GPR_U32(ctx, 2));
    // 0x169cd4: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x169cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x169cd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x169cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169cdc: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x169cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x169ce0: 0xc05a824  jal         func_16A090
    ctx->pc = 0x169CE0u;
    SET_GPR_U32(ctx, 31, 0x169CE8u);
    ctx->pc = 0x16A090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A090u, 0x169CE0u, 0x169CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169CE8u;
label_169ce8:
    // 0x169ce8: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x169ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x169cec: 0xac620058  sw          $v0, 0x58($v1)
    ctx->pc = 0x169cecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
    // 0x169cf0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x169cf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169cf4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x169cf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169cf8: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x169CF8u;
    {
        const bool branch_taken_0x169cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169cf8) {
            ctx->pc = 0x169EC4u;
            goto label_169ec4;
        }
    }
    ctx->pc = 0x169D00u;
label_169d00:
    // 0x169d00: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x169d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x169d04: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x169d04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x169d08: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x169d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x169d0c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x169d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x169d10: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x169d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x169d14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x169d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x169d18: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x169d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x169d1c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x169d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x169d20: 0x24a54208  addiu       $a1, $a1, 0x4208
    ctx->pc = 0x169d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16904));
    // 0x169d24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x169d24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169d28: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x169D28u;
    SET_GPR_U32(ctx, 31, 0x169D30u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x169D28u, 0x169D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169D30u;
label_169d30:
    // 0x169d30: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x169d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x169d34: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x169d34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x169d38: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x169d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x169d3c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x169d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x169d40: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x169d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x169d44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x169d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x169d48: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x169d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x169d4c: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x169d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x169d50: 0xc05621c  jal         func_158870
    ctx->pc = 0x169D50u;
    SET_GPR_U32(ctx, 31, 0x169D58u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x169D50u, 0x169D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169D58u;
label_169d58:
    // 0x169d58: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x169d58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x169d5c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x169d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x169d60: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x169d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x169d64: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x169d64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x169d68: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x169d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x169d6c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x169d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x169d70: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x169d70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x169d74: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x169d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x169d78: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x169d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x169d7c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x169d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x169d80: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x169d80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x169d84: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x169d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x169d88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x169d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x169d8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x169d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x169d90: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x169D90u;
    {
        const bool branch_taken_0x169d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169d90) {
            ctx->pc = 0x169DC8u;
            goto label_169dc8;
        }
    }
    ctx->pc = 0x169D98u;
    // 0x169d98: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x169d98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x169d9c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x169d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x169da0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x169da0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x169da4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x169da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x169da8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x169da8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x169dac: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x169dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x169db0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x169db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x169db4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x169db4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x169db8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x169db8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x169dbc: 0x8cc40034  lw          $a0, 0x34($a2)
    ctx->pc = 0x169dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x169dc0: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x169DC0u;
    SET_GPR_U32(ctx, 31, 0x169DC8u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x169DC0u, 0x169DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169DC8u;
label_169dc8:
    // 0x169dc8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x169dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x169dcc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x169dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x169dd0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x169dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x169dd4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x169dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x169dd8: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x169dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x169ddc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x169ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x169de0: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x169de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x169de4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x169de4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x169de8: 0x24a54218  addiu       $a1, $a1, 0x4218
    ctx->pc = 0x169de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16920));
    // 0x169dec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x169decu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169df0: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x169DF0u;
    SET_GPR_U32(ctx, 31, 0x169DF8u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x169DF0u, 0x169DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169DF8u;
label_169df8:
    // 0x169df8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x169df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x169dfc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x169dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x169e00: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x169e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x169e04: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x169e04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x169e08: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x169e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x169e0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x169e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x169e10: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x169e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x169e14: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x169e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x169e18: 0xc05621c  jal         func_158870
    ctx->pc = 0x169E18u;
    SET_GPR_U32(ctx, 31, 0x169E20u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x169E18u, 0x169E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169E20u;
label_169e20:
    // 0x169e20: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x169e20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x169e24: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x169e24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x169e28: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x169e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x169e2c: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x169e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x169e30: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x169e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x169e34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x169e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x169e38: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x169e38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x169e3c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x169e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x169e40: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x169e40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x169e44: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x169e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x169e48: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x169e48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x169e4c: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x169e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x169e50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x169e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x169e54: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x169e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x169e58: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x169e58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x169e5c: 0x24a54228  addiu       $a1, $a1, 0x4228
    ctx->pc = 0x169e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16936));
    // 0x169e60: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x169e60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169e64: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x169E64u;
    SET_GPR_U32(ctx, 31, 0x169E6Cu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x169E64u, 0x169E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169E6Cu;
label_169e6c:
    // 0x169e6c: 0xc78081b8  lwc1        $f0, -0x7E48($gp)
    ctx->pc = 0x169e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169e70: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x169e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x169e74: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x169e74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x169e78: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x169e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x169e7c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x169e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x169e80: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x169e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x169e84: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x169e84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x169e88: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x169e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x169e8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x169e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x169e90: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x169e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x169e94: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x169e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x169e98: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x169e98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x169e9c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x169e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x169ea0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x169ea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x169ea4: 0x8cc40034  lw          $a0, 0x34($a2)
    ctx->pc = 0x169ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x169ea8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x169ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x169eac: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x169eacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x169eb0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x169eb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169eb4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x169eb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169eb8: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x169EB8u;
    SET_GPR_U32(ctx, 31, 0x169EC0u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x169EB8u, 0x169EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169EC0u;
label_169ec0:
    // 0x169ec0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x169ec0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_169ec4:
    // 0x169ec4: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x169ec4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x169ec8: 0x1440ff8d  bnez        $v0, . + 4 + (-0x73 << 2)
    ctx->pc = 0x169EC8u;
    {
        const bool branch_taken_0x169ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x169ec8) {
            ctx->pc = 0x169D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169d00;
        }
    }
    ctx->pc = 0x169ED0u;
    // 0x169ed0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x169ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x169ed4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x169ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x169ed8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x169ED8u;
    {
        const bool branch_taken_0x169ed8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x169ed8) {
            ctx->pc = 0x169F00u;
            goto label_169f00;
        }
    }
    ctx->pc = 0x169EE0u;
    // 0x169ee0: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x169ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_169ee4:
    // 0x169ee4: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x169ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x169ee8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x169ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x169eec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x169eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x169ef0: 0x0  nop
    ctx->pc = 0x169ef0u;
    // NOP
    // 0x169ef4: 0x0  nop
    ctx->pc = 0x169ef4u;
    // NOP
    // 0x169ef8: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x169EF8u;
    {
        const bool branch_taken_0x169ef8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x169ef8) {
            ctx->pc = 0x169EE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169ee4;
        }
    }
    ctx->pc = 0x169F00u;
label_169f00:
    // 0x169f00: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x169f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x169f04: 0x27858f08  addiu       $a1, $gp, -0x70F8
    ctx->pc = 0x169f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938376));
    // 0x169f08: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x169f08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169f0c: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x169F0Cu;
    SET_GPR_U32(ctx, 31, 0x169F14u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x169F0Cu, 0x169F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169F14u;
label_169f14:
    // 0x169f14: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x169f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x169f18: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x169f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x169f1c: 0xc05621c  jal         func_158870
    ctx->pc = 0x169F1Cu;
    SET_GPR_U32(ctx, 31, 0x169F24u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x169F1Cu, 0x169F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169F24u;
label_169f24:
    // 0x169f24: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x169f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x169f28: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x169f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169f2c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x169F2Cu;
    {
        const bool branch_taken_0x169f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169f2c) {
            ctx->pc = 0x169F4Cu;
            goto label_169f4c;
        }
    }
    ctx->pc = 0x169F34u;
    // 0x169f34: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x169f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x169f38: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x169f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169f3c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x169f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x169f40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x169f40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169f44: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x169F44u;
    SET_GPR_U32(ctx, 31, 0x169F4Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x169F44u, 0x169F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169F4Cu;
label_169f4c:
    // 0x169f4c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x169f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x169f50: 0x27858f10  addiu       $a1, $gp, -0x70F0
    ctx->pc = 0x169f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938384));
    // 0x169f54: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x169f54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169f58: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x169F58u;
    SET_GPR_U32(ctx, 31, 0x169F60u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x169F58u, 0x169F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169F60u;
label_169f60:
    // 0x169f60: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x169f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x169f64: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x169f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x169f68: 0xc05621c  jal         func_158870
    ctx->pc = 0x169F68u;
    SET_GPR_U32(ctx, 31, 0x169F70u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x169F68u, 0x169F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169F70u;
label_169f70:
    // 0x169f70: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x169f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x169f74: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x169f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x169f78: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x169F78u;
    {
        const bool branch_taken_0x169f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169f78) {
            ctx->pc = 0x169F98u;
            goto label_169f98;
        }
    }
    ctx->pc = 0x169F80u;
    // 0x169f80: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x169f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x169f84: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x169f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x169f88: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x169f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x169f8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x169f8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169f90: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x169F90u;
    SET_GPR_U32(ctx, 31, 0x169F98u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x169F90u, 0x169F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169F98u;
label_169f98:
    // 0x169f98: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x169f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x169f9c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x169f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x169fa0: 0x24a54218  addiu       $a1, $a1, 0x4218
    ctx->pc = 0x169fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16920));
    // 0x169fa4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x169fa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169fa8: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x169FA8u;
    SET_GPR_U32(ctx, 31, 0x169FB0u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x169FA8u, 0x169FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169FB0u;
label_169fb0:
    // 0x169fb0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x169fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x169fb4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x169fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x169fb8: 0xc05621c  jal         func_158870
    ctx->pc = 0x169FB8u;
    SET_GPR_U32(ctx, 31, 0x169FC0u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x169FB8u, 0x169FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169FC0u;
label_169fc0:
    // 0x169fc0: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x169fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x169fc4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x169fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x169fc8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x169FC8u;
    {
        const bool branch_taken_0x169fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169fc8) {
            ctx->pc = 0x169FE8u;
            goto label_169fe8;
        }
    }
    ctx->pc = 0x169FD0u;
    // 0x169fd0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x169fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x169fd4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x169fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x169fd8: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x169fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x169fdc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x169fdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169fe0: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x169FE0u;
    SET_GPR_U32(ctx, 31, 0x169FE8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x169FE0u, 0x169FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169FE8u;
label_169fe8:
    // 0x169fe8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x169fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x169fec: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x169fecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x169ff0: 0x24a54208  addiu       $a1, $a1, 0x4208
    ctx->pc = 0x169ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16904));
    // 0x169ff4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x169ff4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169ff8: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x169FF8u;
    SET_GPR_U32(ctx, 31, 0x16A000u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x169FF8u, 0x16A000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A000u;
label_16a000:
    // 0x16a000: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x16a000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16a004: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x16a004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16a008: 0xc05621c  jal         func_158870
    ctx->pc = 0x16A008u;
    SET_GPR_U32(ctx, 31, 0x16A010u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x16A008u, 0x16A010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A010u;
label_16a010:
    // 0x16a010: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x16a010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x16a014: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x16a014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x16a018: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16A018u;
    {
        const bool branch_taken_0x16a018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a018) {
            ctx->pc = 0x16A038u;
            goto label_16a038;
        }
    }
    ctx->pc = 0x16A020u;
    // 0x16a020: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x16a020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16a024: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x16a024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x16a028: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x16a028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x16a02c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16a02cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a030: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x16A030u;
    SET_GPR_U32(ctx, 31, 0x16A038u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x16A030u, 0x16A038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A038u;
label_16a038:
    // 0x16a038: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16a038u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16a03c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x16a03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16a040: 0x1440ffaf  bnez        $v0, . + 4 + (-0x51 << 2)
    ctx->pc = 0x16A040u;
    {
        const bool branch_taken_0x16a040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a040) {
            ctx->pc = 0x169F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169f00;
        }
    }
    ctx->pc = 0x16A048u;
    // 0x16a048: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x16a048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x16a04c: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x16A04Cu;
    {
        const bool branch_taken_0x16a04c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a04c) {
            ctx->pc = 0x169F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169f00;
        }
    }
    ctx->pc = 0x16A054u;
    // 0x16a054: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x16a054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16a058: 0x1440ffa9  bnez        $v0, . + 4 + (-0x57 << 2)
    ctx->pc = 0x16A058u;
    {
        const bool branch_taken_0x16a058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a058) {
            ctx->pc = 0x169F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169f00;
        }
    }
    ctx->pc = 0x16A060u;
    // 0x16a060: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x16a060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x16a064: 0x1440ffa6  bnez        $v0, . + 4 + (-0x5A << 2)
    ctx->pc = 0x16A064u;
    {
        const bool branch_taken_0x16a064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a064) {
            ctx->pc = 0x169F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169f00;
        }
    }
    ctx->pc = 0x16A06Cu;
    // 0x16a06c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x16a06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16a070: 0xc05a88c  jal         func_16A230
    ctx->pc = 0x16A070u;
    SET_GPR_U32(ctx, 31, 0x16A078u);
    ctx->pc = 0x16A230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A230u, 0x16A070u, 0x16A078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A078u;
label_16a078:
    // 0x16a078: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16a078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a07c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16a07cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a080: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x16a080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x16a084: 0x3e00008  jr          $ra
    ctx->pc = 0x16A084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A08Cu;
    // 0x16a08c: 0x0  nop
    ctx->pc = 0x16a08cu;
    // NOP
    ctx->pc = 0x16a090u;
}
