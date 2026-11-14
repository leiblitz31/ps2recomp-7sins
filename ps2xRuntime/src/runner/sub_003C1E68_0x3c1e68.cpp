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

// Function: sub_003C1E68
// Address: 0x3c1e68 - 0x3c2040
void sub_003C1E68_0x3c1e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C1E68_0x3c1e68");
#endif

    switch (ctx->pc) {
        case 0x3c1e68u: goto label_3c1e68;
        case 0x3c1e6cu: goto label_3c1e6c;
        case 0x3c1e70u: goto label_3c1e70;
        case 0x3c1e74u: goto label_3c1e74;
        case 0x3c1e78u: goto label_3c1e78;
        case 0x3c1e7cu: goto label_3c1e7c;
        case 0x3c1e80u: goto label_3c1e80;
        case 0x3c1e84u: goto label_3c1e84;
        case 0x3c1e88u: goto label_3c1e88;
        case 0x3c1e8cu: goto label_3c1e8c;
        case 0x3c1e90u: goto label_3c1e90;
        case 0x3c1e94u: goto label_3c1e94;
        case 0x3c1e98u: goto label_3c1e98;
        case 0x3c1e9cu: goto label_3c1e9c;
        case 0x3c1ea0u: goto label_3c1ea0;
        case 0x3c1ea4u: goto label_3c1ea4;
        case 0x3c1ea8u: goto label_3c1ea8;
        case 0x3c1eacu: goto label_3c1eac;
        case 0x3c1eb0u: goto label_3c1eb0;
        case 0x3c1eb4u: goto label_3c1eb4;
        case 0x3c1eb8u: goto label_3c1eb8;
        case 0x3c1ebcu: goto label_3c1ebc;
        case 0x3c1ec0u: goto label_3c1ec0;
        case 0x3c1ec4u: goto label_3c1ec4;
        case 0x3c1ec8u: goto label_3c1ec8;
        case 0x3c1eccu: goto label_3c1ecc;
        case 0x3c1ed0u: goto label_3c1ed0;
        case 0x3c1ed4u: goto label_3c1ed4;
        case 0x3c1ed8u: goto label_3c1ed8;
        case 0x3c1edcu: goto label_3c1edc;
        case 0x3c1ee0u: goto label_3c1ee0;
        case 0x3c1ee4u: goto label_3c1ee4;
        case 0x3c1ee8u: goto label_3c1ee8;
        case 0x3c1eecu: goto label_3c1eec;
        case 0x3c1ef0u: goto label_3c1ef0;
        case 0x3c1ef4u: goto label_3c1ef4;
        case 0x3c1ef8u: goto label_3c1ef8;
        case 0x3c1efcu: goto label_3c1efc;
        case 0x3c1f00u: goto label_3c1f00;
        case 0x3c1f04u: goto label_3c1f04;
        case 0x3c1f08u: goto label_3c1f08;
        case 0x3c1f0cu: goto label_3c1f0c;
        case 0x3c1f10u: goto label_3c1f10;
        case 0x3c1f14u: goto label_3c1f14;
        case 0x3c1f18u: goto label_3c1f18;
        case 0x3c1f1cu: goto label_3c1f1c;
        case 0x3c1f20u: goto label_3c1f20;
        case 0x3c1f24u: goto label_3c1f24;
        case 0x3c1f28u: goto label_3c1f28;
        case 0x3c1f2cu: goto label_3c1f2c;
        case 0x3c1f30u: goto label_3c1f30;
        case 0x3c1f34u: goto label_3c1f34;
        case 0x3c1f38u: goto label_3c1f38;
        case 0x3c1f3cu: goto label_3c1f3c;
        case 0x3c1f40u: goto label_3c1f40;
        case 0x3c1f44u: goto label_3c1f44;
        case 0x3c1f48u: goto label_3c1f48;
        case 0x3c1f4cu: goto label_3c1f4c;
        case 0x3c1f50u: goto label_3c1f50;
        case 0x3c1f54u: goto label_3c1f54;
        case 0x3c1f58u: goto label_3c1f58;
        case 0x3c1f5cu: goto label_3c1f5c;
        case 0x3c1f60u: goto label_3c1f60;
        case 0x3c1f64u: goto label_3c1f64;
        case 0x3c1f68u: goto label_3c1f68;
        case 0x3c1f6cu: goto label_3c1f6c;
        case 0x3c1f70u: goto label_3c1f70;
        case 0x3c1f74u: goto label_3c1f74;
        case 0x3c1f78u: goto label_3c1f78;
        case 0x3c1f7cu: goto label_3c1f7c;
        case 0x3c1f80u: goto label_3c1f80;
        case 0x3c1f84u: goto label_3c1f84;
        case 0x3c1f88u: goto label_3c1f88;
        case 0x3c1f8cu: goto label_3c1f8c;
        case 0x3c1f90u: goto label_3c1f90;
        case 0x3c1f94u: goto label_3c1f94;
        case 0x3c1f98u: goto label_3c1f98;
        case 0x3c1f9cu: goto label_3c1f9c;
        case 0x3c1fa0u: goto label_3c1fa0;
        case 0x3c1fa4u: goto label_3c1fa4;
        case 0x3c1fa8u: goto label_3c1fa8;
        case 0x3c1facu: goto label_3c1fac;
        case 0x3c1fb0u: goto label_3c1fb0;
        case 0x3c1fb4u: goto label_3c1fb4;
        case 0x3c1fb8u: goto label_3c1fb8;
        case 0x3c1fbcu: goto label_3c1fbc;
        case 0x3c1fc0u: goto label_3c1fc0;
        case 0x3c1fc4u: goto label_3c1fc4;
        case 0x3c1fc8u: goto label_3c1fc8;
        case 0x3c1fccu: goto label_3c1fcc;
        case 0x3c1fd0u: goto label_3c1fd0;
        case 0x3c1fd4u: goto label_3c1fd4;
        case 0x3c1fd8u: goto label_3c1fd8;
        case 0x3c1fdcu: goto label_3c1fdc;
        case 0x3c1fe0u: goto label_3c1fe0;
        case 0x3c1fe4u: goto label_3c1fe4;
        case 0x3c1fe8u: goto label_3c1fe8;
        case 0x3c1fecu: goto label_3c1fec;
        case 0x3c1ff0u: goto label_3c1ff0;
        case 0x3c1ff4u: goto label_3c1ff4;
        case 0x3c1ff8u: goto label_3c1ff8;
        case 0x3c1ffcu: goto label_3c1ffc;
        case 0x3c2000u: goto label_3c2000;
        case 0x3c2004u: goto label_3c2004;
        case 0x3c2008u: goto label_3c2008;
        case 0x3c200cu: goto label_3c200c;
        case 0x3c2010u: goto label_3c2010;
        case 0x3c2014u: goto label_3c2014;
        case 0x3c2018u: goto label_3c2018;
        case 0x3c201cu: goto label_3c201c;
        case 0x3c2020u: goto label_3c2020;
        case 0x3c2024u: goto label_3c2024;
        case 0x3c2028u: goto label_3c2028;
        case 0x3c202cu: goto label_3c202c;
        case 0x3c2030u: goto label_3c2030;
        case 0x3c2034u: goto label_3c2034;
        case 0x3c2038u: goto label_3c2038;
        case 0x3c203cu: goto label_3c203c;
        default: break;
    }

    ctx->pc = 0x3c1e68u;

label_3c1e68:
    // 0x3c1e68: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3c1e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3c1e6c:
    // 0x3c1e6c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3c1e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3c1e70:
    // 0x3c1e70: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3c1e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3c1e74:
    // 0x3c1e74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c1e74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c1e78:
    // 0x3c1e78: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3c1e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3c1e7c:
    // 0x3c1e7c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3c1e7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3c1e80:
    // 0x3c1e80: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3c1e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_3c1e84:
    // 0x3c1e84: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3c1e84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c1e88:
    // 0x3c1e88: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3c1e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_3c1e8c:
    // 0x3c1e8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c1e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3c1e90:
    // 0x3c1e90: 0xc0f0ca8  jal         func_3C32A0
label_3c1e94:
    if (ctx->pc == 0x3C1E94u) {
        ctx->pc = 0x3C1E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1E90u;
        // 0x3c1e94: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1E98u;
        goto label_3c1e98;
    }
    ctx->pc = 0x3C1E90u;
    SET_GPR_U32(ctx, 31, 0x3C1E98u);
    ctx->pc = 0x3C1E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1E90u;
    // 0x3c1e94: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C32A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C32A0u, 0x3C1E90u, 0x3C1E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1E98u;
label_3c1e98:
    // 0x3c1e98: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
label_3c1e9c:
    if (ctx->pc == 0x3C1E9Cu) {
        ctx->pc = 0x3C1E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1E98u;
        // 0x3c1e9c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1EA0u;
        goto label_3c1ea0;
    }
    ctx->pc = 0x3C1E98u;
    {
        const bool branch_taken_0x3c1e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1E98u;
        // 0x3c1e9c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1e98) {
            ctx->pc = 0x3C2020u;
            goto label_3c2020;
        }
    }
    ctx->pc = 0x3C1EA0u;
label_3c1ea0:
    // 0x3c1ea0: 0xc0f0cbe  jal         func_3C32F8
label_3c1ea4:
    if (ctx->pc == 0x3C1EA4u) {
        ctx->pc = 0x3C1EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1EA0u;
        // 0x3c1ea4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1EA8u;
        goto label_3c1ea8;
    }
    ctx->pc = 0x3C1EA0u;
    SET_GPR_U32(ctx, 31, 0x3C1EA8u);
    ctx->pc = 0x3C1EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1EA0u;
    // 0x3c1ea4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C32F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C32F8u, 0x3C1EA0u, 0x3C1EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1EA8u;
label_3c1ea8:
    // 0x3c1ea8: 0x1440005d  bnez        $v0, . + 4 + (0x5D << 2)
label_3c1eac:
    if (ctx->pc == 0x3C1EACu) {
        ctx->pc = 0x3C1EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1EA8u;
        // 0x3c1eac: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1EB0u;
        goto label_3c1eb0;
    }
    ctx->pc = 0x3C1EA8u;
    {
        const bool branch_taken_0x3c1ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C1EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1EA8u;
        // 0x3c1eac: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1ea8) {
            ctx->pc = 0x3C2020u;
            goto label_3c2020;
        }
    }
    ctx->pc = 0x3C1EB0u;
label_3c1eb0:
    // 0x3c1eb0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3c1eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3c1eb4:
    // 0x3c1eb4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c1eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c1eb8:
    // 0x3c1eb8: 0x8c62e94c  lw          $v0, -0x16B4($v1)
    ctx->pc = 0x3c1eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961484)));
label_3c1ebc:
    // 0x3c1ebc: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x3c1ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_3c1ec0:
    // 0x3c1ec0: 0x40f809  jalr        $v0
label_3c1ec4:
    if (ctx->pc == 0x3C1EC4u) {
        ctx->pc = 0x3C1EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1EC0u;
        // 0x3c1ec4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1EC8u;
        goto label_3c1ec8;
    }
    ctx->pc = 0x3C1EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C1EC8u);
        ctx->pc = 0x3C1EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1EC0u;
        // 0x3c1ec4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1EC0u, 0x3C1EC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C1EC8u;
label_3c1ec8:
    // 0x3c1ec8: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x3c1ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
label_3c1ecc:
    // 0x3c1ecc: 0x1a400047  blez        $s2, . + 4 + (0x47 << 2)
label_3c1ed0:
    if (ctx->pc == 0x3C1ED0u) {
        ctx->pc = 0x3C1ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1ECCu;
        // 0x3c1ed0: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1ED4u;
        goto label_3c1ed4;
    }
    ctx->pc = 0x3C1ECCu;
    {
        const bool branch_taken_0x3c1ecc = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x3C1ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1ECCu;
        // 0x3c1ed0: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1ecc) {
            ctx->pc = 0x3C1FECu;
            goto label_3c1fec;
        }
    }
    ctx->pc = 0x3C1ED4u;
label_3c1ed4:
    // 0x3c1ed4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x3c1ed4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c1ed8:
    // 0x3c1ed8: 0x1a400018  blez        $s2, . + 4 + (0x18 << 2)
label_3c1edc:
    if (ctx->pc == 0x3C1EDCu) {
        ctx->pc = 0x3C1EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1ED8u;
        // 0x3c1edc: 0x32430003  andi        $v1, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1EE0u;
        goto label_3c1ee0;
    }
    ctx->pc = 0x3C1ED8u;
    {
        const bool branch_taken_0x3c1ed8 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x3C1EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1ED8u;
        // 0x3c1edc: 0x32430003  andi        $v1, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1ed8) {
            ctx->pc = 0x3C1F3Cu;
            goto label_3c1f3c;
        }
    }
    ctx->pc = 0x3C1EE0u;
label_3c1ee0:
    // 0x3c1ee0: 0x50600022  beql        $v1, $zero, . + 4 + (0x22 << 2)
label_3c1ee4:
    if (ctx->pc == 0x3C1EE4u) {
        ctx->pc = 0x3C1EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1EE0u;
        // 0x3c1ee4: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1EE8u;
        goto label_3c1ee8;
    }
    ctx->pc = 0x3C1EE0u;
    {
        const bool branch_taken_0x3c1ee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c1ee0) {
            ctx->pc = 0x3C1EE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C1EE0u;
            // 0x3c1ee4: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C1F6Cu;
            goto label_3c1f6c;
        }
    }
    ctx->pc = 0x3C1EE8u;
label_3c1ee8:
    // 0x3c1ee8: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3c1ee8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_3c1eec:
    // 0x3c1eec: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
label_3c1ef0:
    if (ctx->pc == 0x3C1EF0u) {
        ctx->pc = 0x3C1EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1EECu;
        // 0x3c1ef0: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1EF4u;
        goto label_3c1ef4;
    }
    ctx->pc = 0x3C1EECu;
    {
        const bool branch_taken_0x3c1eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c1eec) {
            ctx->pc = 0x3C1EF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C1EECu;
            // 0x3c1ef0: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C1F40u;
            goto label_3c1f40;
        }
    }
    ctx->pc = 0x3C1EF4u;
label_3c1ef4:
    // 0x3c1ef4: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3c1ef4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3c1ef8:
    // 0x3c1ef8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_3c1efc:
    if (ctx->pc == 0x3C1EFCu) {
        ctx->pc = 0x3C1EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1EF8u;
        // 0x3c1efc: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1F00u;
        goto label_3c1f00;
    }
    ctx->pc = 0x3C1EF8u;
    {
        const bool branch_taken_0x3c1ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C1EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1EF8u;
        // 0x3c1efc: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1ef8) {
            ctx->pc = 0x3C1F20u;
            goto label_3c1f20;
        }
    }
    ctx->pc = 0x3C1F00u;
label_3c1f00:
    // 0x3c1f00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c1f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c1f04:
    // 0x3c1f04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c1f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c1f08:
    // 0x3c1f08: 0x40f809  jalr        $v0
label_3c1f0c:
    if (ctx->pc == 0x3C1F0Cu) {
        ctx->pc = 0x3C1F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1F08u;
        // 0x3c1f0c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1F10u;
        goto label_3c1f10;
    }
    ctx->pc = 0x3C1F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C1F10u);
        ctx->pc = 0x3C1F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1F08u;
        // 0x3c1f0c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1F08u, 0x3C1F10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C1F10u;
label_3c1f10:
    // 0x3c1f10: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x3c1f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3c1f14:
    // 0x3c1f14: 0xac530038  sw          $s3, 0x38($v0)
    ctx->pc = 0x3c1f14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 19));
label_3c1f18:
    // 0x3c1f18: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x3c1f18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
label_3c1f1c:
    // 0x3c1f1c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x3c1f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3c1f20:
    // 0x3c1f20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c1f20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c1f24:
    // 0x3c1f24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c1f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c1f28:
    // 0x3c1f28: 0x40f809  jalr        $v0
label_3c1f2c:
    if (ctx->pc == 0x3C1F2Cu) {
        ctx->pc = 0x3C1F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1F28u;
        // 0x3c1f2c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1F30u;
        goto label_3c1f30;
    }
    ctx->pc = 0x3C1F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C1F30u);
        ctx->pc = 0x3C1F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1F28u;
        // 0x3c1f2c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1F28u, 0x3C1F30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C1F30u;
label_3c1f30:
    // 0x3c1f30: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x3c1f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3c1f34:
    // 0x3c1f34: 0xac530038  sw          $s3, 0x38($v0)
    ctx->pc = 0x3c1f34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 19));
label_3c1f38:
    // 0x3c1f38: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x3c1f38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
label_3c1f3c:
    // 0x3c1f3c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x3c1f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3c1f40:
    // 0x3c1f40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c1f40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c1f44:
    // 0x3c1f44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c1f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c1f48:
    // 0x3c1f48: 0x40f809  jalr        $v0
label_3c1f4c:
    if (ctx->pc == 0x3C1F4Cu) {
        ctx->pc = 0x3C1F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1F48u;
        // 0x3c1f4c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1F50u;
        goto label_3c1f50;
    }
    ctx->pc = 0x3C1F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C1F50u);
        ctx->pc = 0x3C1F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1F48u;
        // 0x3c1f4c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1F48u, 0x3C1F50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C1F50u;
label_3c1f50:
    // 0x3c1f50: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x3c1f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3c1f54:
    // 0x3c1f54: 0x232202a  slt         $a0, $s1, $s2
    ctx->pc = 0x3c1f54u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_3c1f58:
    // 0x3c1f58: 0xac530038  sw          $s3, 0x38($v0)
    ctx->pc = 0x3c1f58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 19));
label_3c1f5c:
    // 0x3c1f5c: 0x10800023  beqz        $a0, . + 4 + (0x23 << 2)
label_3c1f60:
    if (ctx->pc == 0x3C1F60u) {
        ctx->pc = 0x3C1F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1F5Cu;
        // 0x3c1f60: 0xac430030  sw          $v1, 0x30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1F64u;
        goto label_3c1f64;
    }
    ctx->pc = 0x3C1F5Cu;
    {
        const bool branch_taken_0x3c1f5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1F5Cu;
        // 0x3c1f60: 0xac430030  sw          $v1, 0x30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1f5c) {
            ctx->pc = 0x3C1FECu;
            goto label_3c1fec;
        }
    }
    ctx->pc = 0x3C1F64u;
label_3c1f64:
    // 0x3c1f64: 0x0  nop
    ctx->pc = 0x3c1f64u;
    // NOP
label_3c1f68:
    // 0x3c1f68: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x3c1f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3c1f6c:
    // 0x3c1f6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c1f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c1f70:
    // 0x3c1f70: 0x40f809  jalr        $v0
label_3c1f74:
    if (ctx->pc == 0x3C1F74u) {
        ctx->pc = 0x3C1F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1F70u;
        // 0x3c1f74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1F78u;
        goto label_3c1f78;
    }
    ctx->pc = 0x3C1F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C1F78u);
        ctx->pc = 0x3C1F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1F70u;
        // 0x3c1f74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1F70u, 0x3C1F78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C1F78u;
label_3c1f78:
    // 0x3c1f78: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x3c1f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3c1f7c:
    // 0x3c1f7c: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x3c1f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3c1f80:
    // 0x3c1f80: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x3c1f80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3c1f84:
    // 0x3c1f84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c1f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c1f88:
    // 0x3c1f88: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x3c1f88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
label_3c1f8c:
    // 0x3c1f8c: 0xc0f809  jalr        $a2
label_3c1f90:
    if (ctx->pc == 0x3C1F90u) {
        ctx->pc = 0x3C1F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1F8Cu;
        // 0x3c1f90: 0xac530038  sw          $s3, 0x38($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1F94u;
        goto label_3c1f94;
    }
    ctx->pc = 0x3C1F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x3C1F94u);
        ctx->pc = 0x3C1F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1F8Cu;
        // 0x3c1f90: 0xac530038  sw          $s3, 0x38($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1F8Cu, 0x3C1F94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C1F94u;
label_3c1f94:
    // 0x3c1f94: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x3c1f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3c1f98:
    // 0x3c1f98: 0x26250002  addiu       $a1, $s1, 0x2
    ctx->pc = 0x3c1f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_3c1f9c:
    // 0x3c1f9c: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x3c1f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3c1fa0:
    // 0x3c1fa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c1fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c1fa4:
    // 0x3c1fa4: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x3c1fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
label_3c1fa8:
    // 0x3c1fa8: 0xc0f809  jalr        $a2
label_3c1fac:
    if (ctx->pc == 0x3C1FACu) {
        ctx->pc = 0x3C1FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1FA8u;
        // 0x3c1fac: 0xac530038  sw          $s3, 0x38($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1FB0u;
        goto label_3c1fb0;
    }
    ctx->pc = 0x3C1FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x3C1FB0u);
        ctx->pc = 0x3C1FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1FA8u;
        // 0x3c1fac: 0xac530038  sw          $s3, 0x38($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1FA8u, 0x3C1FB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C1FB0u;
label_3c1fb0:
    // 0x3c1fb0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x3c1fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3c1fb4:
    // 0x3c1fb4: 0x26250003  addiu       $a1, $s1, 0x3
    ctx->pc = 0x3c1fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
label_3c1fb8:
    // 0x3c1fb8: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x3c1fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3c1fbc:
    // 0x3c1fbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c1fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c1fc0:
    // 0x3c1fc0: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x3c1fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
label_3c1fc4:
    // 0x3c1fc4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x3c1fc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_3c1fc8:
    // 0x3c1fc8: 0xc0f809  jalr        $a2
label_3c1fcc:
    if (ctx->pc == 0x3C1FCCu) {
        ctx->pc = 0x3C1FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1FC8u;
        // 0x3c1fcc: 0xac530038  sw          $s3, 0x38($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1FD0u;
        goto label_3c1fd0;
    }
    ctx->pc = 0x3C1FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x3C1FD0u);
        ctx->pc = 0x3C1FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1FC8u;
        // 0x3c1fcc: 0xac530038  sw          $s3, 0x38($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1FC8u, 0x3C1FD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C1FD0u;
label_3c1fd0:
    // 0x3c1fd0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x3c1fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3c1fd4:
    // 0x3c1fd4: 0x232202a  slt         $a0, $s1, $s2
    ctx->pc = 0x3c1fd4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_3c1fd8:
    // 0x3c1fd8: 0xac530038  sw          $s3, 0x38($v0)
    ctx->pc = 0x3c1fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 19));
label_3c1fdc:
    // 0x3c1fdc: 0x1480ffe2  bnez        $a0, . + 4 + (-0x1E << 2)
label_3c1fe0:
    if (ctx->pc == 0x3C1FE0u) {
        ctx->pc = 0x3C1FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1FDCu;
        // 0x3c1fe0: 0xac430030  sw          $v1, 0x30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1FE4u;
        goto label_3c1fe4;
    }
    ctx->pc = 0x3C1FDCu;
    {
        const bool branch_taken_0x3c1fdc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C1FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1FDCu;
        // 0x3c1fe0: 0xac430030  sw          $v1, 0x30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1fdc) {
            ctx->pc = 0x3C1F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c1f68;
        }
    }
    ctx->pc = 0x3C1FE4u;
label_3c1fe4:
    // 0x3c1fe4: 0x10000002  b           . + 4 + (0x2 << 2)
label_3c1fe8:
    if (ctx->pc == 0x3C1FE8u) {
        ctx->pc = 0x3C1FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1FE4u;
        // 0x3c1fe8: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1FECu;
        goto label_3c1fec;
    }
    ctx->pc = 0x3C1FE4u;
    {
        const bool branch_taken_0x3c1fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1FE4u;
        // 0x3c1fe8: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1fe4) {
            ctx->pc = 0x3C1FF0u;
            goto label_3c1ff0;
        }
    }
    ctx->pc = 0x3C1FECu;
label_3c1fec:
    // 0x3c1fec: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x3c1fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_3c1ff0:
    // 0x3c1ff0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3c1ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c1ff4:
    // 0x3c1ff4: 0xc0f08fc  jal         func_3C23F0
label_3c1ff8:
    if (ctx->pc == 0x3C1FF8u) {
        ctx->pc = 0x3C1FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1FF4u;
        // 0x3c1ff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1FFCu;
        goto label_3c1ffc;
    }
    ctx->pc = 0x3C1FF4u;
    SET_GPR_U32(ctx, 31, 0x3C1FFCu);
    ctx->pc = 0x3C1FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1FF4u;
    // 0x3c1ff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C23F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C23F0u, 0x3C1FF4u, 0x3C1FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1FFCu;
label_3c1ffc:
    // 0x3c1ffc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3c1ffcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c2000:
    // 0x3c2000: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c2000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c2004:
    // 0x3c2004: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_3c2008:
    if (ctx->pc == 0x3C2008u) {
        ctx->pc = 0x3C2008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2004u;
        // 0x3c2008: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C200Cu;
        goto label_3c200c;
    }
    ctx->pc = 0x3C2004u;
    {
        const bool branch_taken_0x3c2004 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C2008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2004u;
        // 0x3c2008: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2004) {
            ctx->pc = 0x3C2020u;
            goto label_3c2020;
        }
    }
    ctx->pc = 0x3C200Cu;
label_3c200c:
    // 0x3c200c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3c200cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c2010:
    // 0x3c2010: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x3c2010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_3c2014:
    // 0x3c2014: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3c2014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_3c2018:
    // 0x3c2018: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c2018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c201c:
    // 0x3c201c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x3c201cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_3c2020:
    // 0x3c2020: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3c2020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c2024:
    // 0x3c2024: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3c2024u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c2028:
    // 0x3c2028: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3c2028u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c202c:
    // 0x3c202c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3c202cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c2030:
    // 0x3c2030: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3c2030u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c2034:
    // 0x3c2034: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c2034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c2038:
    // 0x3c2038: 0x3e00008  jr          $ra
label_3c203c:
    if (ctx->pc == 0x3C203Cu) {
        ctx->pc = 0x3C203Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2038u;
        // 0x3c203c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2040u;
        goto label_fallthrough_0x3c2038;
    }
    ctx->pc = 0x3C2038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C203Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2038u;
        // 0x3c203c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c2038:
    ctx->pc = 0x3C2040u;
}
