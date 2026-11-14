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

// Function: sub_00321E10
// Address: 0x321e10 - 0x321fa8
void sub_00321E10_0x321e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321E10_0x321e10");
#endif

    switch (ctx->pc) {
        case 0x321e10u: goto label_321e10;
        case 0x321e14u: goto label_321e14;
        case 0x321e18u: goto label_321e18;
        case 0x321e1cu: goto label_321e1c;
        case 0x321e20u: goto label_321e20;
        case 0x321e24u: goto label_321e24;
        case 0x321e28u: goto label_321e28;
        case 0x321e2cu: goto label_321e2c;
        case 0x321e30u: goto label_321e30;
        case 0x321e34u: goto label_321e34;
        case 0x321e38u: goto label_321e38;
        case 0x321e3cu: goto label_321e3c;
        case 0x321e40u: goto label_321e40;
        case 0x321e44u: goto label_321e44;
        case 0x321e48u: goto label_321e48;
        case 0x321e4cu: goto label_321e4c;
        case 0x321e50u: goto label_321e50;
        case 0x321e54u: goto label_321e54;
        case 0x321e58u: goto label_321e58;
        case 0x321e5cu: goto label_321e5c;
        case 0x321e60u: goto label_321e60;
        case 0x321e64u: goto label_321e64;
        case 0x321e68u: goto label_321e68;
        case 0x321e6cu: goto label_321e6c;
        case 0x321e70u: goto label_321e70;
        case 0x321e74u: goto label_321e74;
        case 0x321e78u: goto label_321e78;
        case 0x321e7cu: goto label_321e7c;
        case 0x321e80u: goto label_321e80;
        case 0x321e84u: goto label_321e84;
        case 0x321e88u: goto label_321e88;
        case 0x321e8cu: goto label_321e8c;
        case 0x321e90u: goto label_321e90;
        case 0x321e94u: goto label_321e94;
        case 0x321e98u: goto label_321e98;
        case 0x321e9cu: goto label_321e9c;
        case 0x321ea0u: goto label_321ea0;
        case 0x321ea4u: goto label_321ea4;
        case 0x321ea8u: goto label_321ea8;
        case 0x321eacu: goto label_321eac;
        case 0x321eb0u: goto label_321eb0;
        case 0x321eb4u: goto label_321eb4;
        case 0x321eb8u: goto label_321eb8;
        case 0x321ebcu: goto label_321ebc;
        case 0x321ec0u: goto label_321ec0;
        case 0x321ec4u: goto label_321ec4;
        case 0x321ec8u: goto label_321ec8;
        case 0x321eccu: goto label_321ecc;
        case 0x321ed0u: goto label_321ed0;
        case 0x321ed4u: goto label_321ed4;
        case 0x321ed8u: goto label_321ed8;
        case 0x321edcu: goto label_321edc;
        case 0x321ee0u: goto label_321ee0;
        case 0x321ee4u: goto label_321ee4;
        case 0x321ee8u: goto label_321ee8;
        case 0x321eecu: goto label_321eec;
        case 0x321ef0u: goto label_321ef0;
        case 0x321ef4u: goto label_321ef4;
        case 0x321ef8u: goto label_321ef8;
        case 0x321efcu: goto label_321efc;
        case 0x321f00u: goto label_321f00;
        case 0x321f04u: goto label_321f04;
        case 0x321f08u: goto label_321f08;
        case 0x321f0cu: goto label_321f0c;
        case 0x321f10u: goto label_321f10;
        case 0x321f14u: goto label_321f14;
        case 0x321f18u: goto label_321f18;
        case 0x321f1cu: goto label_321f1c;
        case 0x321f20u: goto label_321f20;
        case 0x321f24u: goto label_321f24;
        case 0x321f28u: goto label_321f28;
        case 0x321f2cu: goto label_321f2c;
        case 0x321f30u: goto label_321f30;
        case 0x321f34u: goto label_321f34;
        case 0x321f38u: goto label_321f38;
        case 0x321f3cu: goto label_321f3c;
        case 0x321f40u: goto label_321f40;
        case 0x321f44u: goto label_321f44;
        case 0x321f48u: goto label_321f48;
        case 0x321f4cu: goto label_321f4c;
        case 0x321f50u: goto label_321f50;
        case 0x321f54u: goto label_321f54;
        case 0x321f58u: goto label_321f58;
        case 0x321f5cu: goto label_321f5c;
        case 0x321f60u: goto label_321f60;
        case 0x321f64u: goto label_321f64;
        case 0x321f68u: goto label_321f68;
        case 0x321f6cu: goto label_321f6c;
        case 0x321f70u: goto label_321f70;
        case 0x321f74u: goto label_321f74;
        case 0x321f78u: goto label_321f78;
        case 0x321f7cu: goto label_321f7c;
        case 0x321f80u: goto label_321f80;
        case 0x321f84u: goto label_321f84;
        case 0x321f88u: goto label_321f88;
        case 0x321f8cu: goto label_321f8c;
        case 0x321f90u: goto label_321f90;
        case 0x321f94u: goto label_321f94;
        case 0x321f98u: goto label_321f98;
        case 0x321f9cu: goto label_321f9c;
        case 0x321fa0u: goto label_321fa0;
        case 0x321fa4u: goto label_321fa4;
        default: break;
    }

    ctx->pc = 0x321e10u;

label_321e10:
    // 0x321e10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x321e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_321e14:
    // 0x321e14: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x321e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_321e18:
    // 0x321e18: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x321e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_321e1c:
    // 0x321e1c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x321e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_321e20:
    // 0x321e20: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x321e20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_321e24:
    // 0x321e24: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x321e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_321e28:
    // 0x321e28: 0x2444b1a8  addiu       $a0, $v0, -0x4E58
    ctx->pc = 0x321e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947240));
label_321e2c:
    // 0x321e2c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x321e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_321e30:
    // 0x321e30: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x321e30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_321e34:
    // 0x321e34: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x321e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_321e38:
    // 0x321e38: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x321e38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_321e3c:
    // 0x321e3c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x321e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_321e40:
    // 0x321e40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x321e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_321e44:
    // 0x321e44: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x321e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_321e48:
    // 0x321e48: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x321e48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_321e4c:
    // 0x321e4c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x321e4cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_321e50:
    // 0x321e50: 0x1620002a  bnez        $s1, . + 4 + (0x2A << 2)
label_321e54:
    if (ctx->pc == 0x321E54u) {
        ctx->pc = 0x321E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321E50u;
        // 0x321e54: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321E58u;
        goto label_321e58;
    }
    ctx->pc = 0x321E50u;
    {
        const bool branch_taken_0x321e50 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x321E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321E50u;
        // 0x321e54: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321e50) {
            ctx->pc = 0x321EFCu;
            goto label_321efc;
        }
    }
    ctx->pc = 0x321E58u;
label_321e58:
    // 0x321e58: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x321e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_321e5c:
    // 0x321e5c: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x321e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_321e60:
    // 0x321e60: 0x8c62e998  lw          $v0, -0x1668($v1)
    ctx->pc = 0x321e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961560)));
label_321e64:
    // 0x321e64: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x321e64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_321e68:
    // 0x321e68: 0x40f809  jalr        $v0
label_321e6c:
    if (ctx->pc == 0x321E6Cu) {
        ctx->pc = 0x321E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321E68u;
        // 0x321e6c: 0x34a50112  ori         $a1, $a1, 0x112 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)274);
        ctx->in_delay_slot = false;
        ctx->pc = 0x321E70u;
        goto label_321e70;
    }
    ctx->pc = 0x321E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x321E70u);
        ctx->pc = 0x321E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321E68u;
        // 0x321e6c: 0x34a50112  ori         $a1, $a1, 0x112 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)274);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321E68u, 0x321E70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x321E70u;
label_321e70:
    // 0x321e70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x321e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_321e74:
    // 0x321e74: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
label_321e78:
    if (ctx->pc == 0x321E78u) {
        ctx->pc = 0x321E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321E74u;
        // 0x321e78: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321E7Cu;
        goto label_321e7c;
    }
    ctx->pc = 0x321E74u;
    {
        const bool branch_taken_0x321e74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x321E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321E74u;
        // 0x321e78: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321e74) {
            ctx->pc = 0x321ED8u;
            goto label_321ed8;
        }
    }
    ctx->pc = 0x321E7Cu;
label_321e7c:
    // 0x321e7c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x321e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_321e80:
    // 0x321e80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x321e80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_321e84:
    // 0x321e84: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x321e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
label_321e88:
    // 0x321e88: 0x24632608  addiu       $v1, $v1, 0x2608
    ctx->pc = 0x321e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9736));
label_321e8c:
    // 0x321e8c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x321e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_321e90:
    // 0x321e90: 0x24a2003c  addiu       $v0, $a1, 0x3C
    ctx->pc = 0x321e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
label_321e94:
    // 0x321e94: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x321e94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_321e98:
    // 0x321e98: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x321e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
label_321e9c:
    // 0x321e9c: 0xaca40014  sw          $a0, 0x14($a1)
    ctx->pc = 0x321e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 4));
label_321ea0:
    // 0x321ea0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x321ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_321ea4:
    // 0x321ea4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x321ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_321ea8:
    // 0x321ea8: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x321ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_321eac:
    // 0x321eac: 0xaca0003c  sw          $zero, 0x3C($a1)
    ctx->pc = 0x321eacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 0));
label_321eb0:
    // 0x321eb0: 0xac40ffdc  sw          $zero, -0x24($v0)
    ctx->pc = 0x321eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967260), GPR_U32(ctx, 0));
label_321eb4:
    // 0x321eb4: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x321eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
label_321eb8:
    // 0x321eb8: 0xac40fff8  sw          $zero, -0x8($v0)
    ctx->pc = 0x321eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 0));
label_321ebc:
    // 0x321ebc: 0xac40fff4  sw          $zero, -0xC($v0)
    ctx->pc = 0x321ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967284), GPR_U32(ctx, 0));
label_321ec0:
    // 0x321ec0: 0xac40fff0  sw          $zero, -0x10($v0)
    ctx->pc = 0x321ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967280), GPR_U32(ctx, 0));
label_321ec4:
    // 0x321ec4: 0xac40ffec  sw          $zero, -0x14($v0)
    ctx->pc = 0x321ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967276), GPR_U32(ctx, 0));
label_321ec8:
    // 0x321ec8: 0xac40ffe8  sw          $zero, -0x18($v0)
    ctx->pc = 0x321ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967272), GPR_U32(ctx, 0));
label_321ecc:
    // 0x321ecc: 0xac40ffe4  sw          $zero, -0x1C($v0)
    ctx->pc = 0x321eccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967268), GPR_U32(ctx, 0));
label_321ed0:
    // 0x321ed0: 0xac40ffe0  sw          $zero, -0x20($v0)
    ctx->pc = 0x321ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967264), GPR_U32(ctx, 0));
label_321ed4:
    // 0x321ed4: 0x0  nop
    ctx->pc = 0x321ed4u;
    // NOP
label_321ed8:
    // 0x321ed8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x321ed8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_321edc:
    // 0x321edc: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
label_321ee0:
    if (ctx->pc == 0x321EE0u) {
        ctx->pc = 0x321EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321EDCu;
        // 0x321ee0: 0xacd10000  sw          $s1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321EE4u;
        goto label_321ee4;
    }
    ctx->pc = 0x321EDCu;
    {
        const bool branch_taken_0x321edc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x321EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321EDCu;
        // 0x321ee0: 0xacd10000  sw          $s1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321edc) {
            ctx->pc = 0x321F6Cu;
            goto label_321f6c;
        }
    }
    ctx->pc = 0x321EE4u;
label_321ee4:
    // 0x321ee4: 0x8e500018  lw          $s0, 0x18($s2)
    ctx->pc = 0x321ee4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_321ee8:
    // 0x321ee8: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
label_321eec:
    if (ctx->pc == 0x321EECu) {
        ctx->pc = 0x321EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321EE8u;
        // 0x321eec: 0xae300018  sw          $s0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321EF0u;
        goto label_321ef0;
    }
    ctx->pc = 0x321EE8u;
    {
        const bool branch_taken_0x321ee8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x321ee8) {
            ctx->pc = 0x321EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321EE8u;
            // 0x321eec: 0xae300018  sw          $s0, 0x18($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321EFCu;
            goto label_321efc;
        }
    }
    ctx->pc = 0x321EF0u;
label_321ef0:
    // 0x321ef0: 0xc0e3444  jal         func_38D110
label_321ef4:
    if (ctx->pc == 0x321EF4u) {
        ctx->pc = 0x321EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321EF0u;
        // 0x321ef4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321EF8u;
        goto label_321ef8;
    }
    ctx->pc = 0x321EF0u;
    SET_GPR_U32(ctx, 31, 0x321EF8u);
    ctx->pc = 0x321EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321EF0u;
    // 0x321ef4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D110u, 0x321EF0u, 0x321EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321EF8u;
label_321ef8:
    // 0x321ef8: 0xae300018  sw          $s0, 0x18($s1)
    ctx->pc = 0x321ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 16));
label_321efc:
    // 0x321efc: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_321f00:
    if (ctx->pc == 0x321F00u) {
        ctx->pc = 0x321F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321EFCu;
        // 0x321f00: 0x141880  sll         $v1, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321F04u;
        goto label_321f04;
    }
    ctx->pc = 0x321EFCu;
    {
        const bool branch_taken_0x321efc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x321F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321EFCu;
        // 0x321f00: 0x141880  sll         $v1, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321efc) {
            ctx->pc = 0x321F10u;
            goto label_321f10;
        }
    }
    ctx->pc = 0x321F04u;
label_321f04:
    // 0x321f04: 0xc0e3444  jal         func_38D110
label_321f08:
    if (ctx->pc == 0x321F08u) {
        ctx->pc = 0x321F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321F04u;
        // 0x321f08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321F0Cu;
        goto label_321f0c;
    }
    ctx->pc = 0x321F04u;
    SET_GPR_U32(ctx, 31, 0x321F0Cu);
    ctx->pc = 0x321F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321F04u;
    // 0x321f08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D110u, 0x321F04u, 0x321F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321F0Cu;
label_321f0c:
    // 0x321f0c: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x321f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_321f10:
    // 0x321f10: 0x26220018  addiu       $v0, $s1, 0x18
    ctx->pc = 0x321f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_321f14:
    // 0x321f14: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x321f14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_321f18:
    // 0x321f18: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x321f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_321f1c:
    // 0x321f1c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_321f20:
    if (ctx->pc == 0x321F20u) {
        ctx->pc = 0x321F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321F1Cu;
        // 0x321f20: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321F24u;
        goto label_321f24;
    }
    ctx->pc = 0x321F1Cu;
    {
        const bool branch_taken_0x321f1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x321f1c) {
            ctx->pc = 0x321F20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321F1Cu;
            // 0x321f20: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321F30u;
            goto label_321f30;
        }
    }
    ctx->pc = 0x321F24u;
label_321f24:
    // 0x321f24: 0xc0e3414  jal         func_38D050
label_321f28:
    if (ctx->pc == 0x321F28u) {
        ctx->pc = 0x321F2Cu;
        goto label_321f2c;
    }
    ctx->pc = 0x321F24u;
    SET_GPR_U32(ctx, 31, 0x321F2Cu);
    ctx->pc = 0x38D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D050u, 0x321F24u, 0x321F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321F2Cu;
label_321f2c:
    // 0x321f2c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x321f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_321f30:
    // 0x321f30: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_321f34:
    if (ctx->pc == 0x321F34u) {
        ctx->pc = 0x321F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321F30u;
        // 0x321f34: 0xae130000  sw          $s3, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321F38u;
        goto label_321f38;
    }
    ctx->pc = 0x321F30u;
    {
        const bool branch_taken_0x321f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x321F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321F30u;
        // 0x321f34: 0xae130000  sw          $s3, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321f30) {
            ctx->pc = 0x321F68u;
            goto label_321f68;
        }
    }
    ctx->pc = 0x321F38u;
label_321f38:
    // 0x321f38: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x321f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_321f3c:
    // 0x321f3c: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x321f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_321f40:
    // 0x321f40: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x321f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
label_321f44:
    // 0x321f44: 0x24422730  addiu       $v0, $v0, 0x2730
    ctx->pc = 0x321f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10032));
label_321f48:
    // 0x321f48: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_321f4c:
    if (ctx->pc == 0x321F4Cu) {
        ctx->pc = 0x321F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321F48u;
        // 0x321f4c: 0xae420048  sw          $v0, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321F50u;
        goto label_321f50;
    }
    ctx->pc = 0x321F48u;
    {
        const bool branch_taken_0x321f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x321F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321F48u;
        // 0x321f4c: 0xae420048  sw          $v0, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321f48) {
            ctx->pc = 0x321F60u;
            goto label_321f60;
        }
    }
    ctx->pc = 0x321F50u;
label_321f50:
    // 0x321f50: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x321f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_321f54:
    // 0x321f54: 0x24429850  addiu       $v0, $v0, -0x67B0
    ctx->pc = 0x321f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940752));
label_321f58:
    // 0x321f58: 0xae420048  sw          $v0, 0x48($s2)
    ctx->pc = 0x321f58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
label_321f5c:
    // 0x321f5c: 0x0  nop
    ctx->pc = 0x321f5cu;
    // NOP
label_321f60:
    // 0x321f60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x321f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_321f64:
    // 0x321f64: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x321f64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_321f68:
    // 0x321f68: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x321f68u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_321f6c:
    // 0x321f6c: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x321f6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_321f70:
    // 0x321f70: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x321f70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_321f74:
    // 0x321f74: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x321f74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_321f78:
    // 0x321f78: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x321f78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_321f7c:
    // 0x321f7c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x321f7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_321f80:
    // 0x321f80: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x321f80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_321f84:
    // 0x321f84: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x321f84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_321f88:
    // 0x321f88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x321f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_321f8c:
    // 0x321f8c: 0x3e00008  jr          $ra
label_321f90:
    if (ctx->pc == 0x321F90u) {
        ctx->pc = 0x321F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321F8Cu;
        // 0x321f90: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321F94u;
        goto label_321f94;
    }
    ctx->pc = 0x321F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321F8Cu;
        // 0x321f90: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321F94u;
label_321f94:
    // 0x321f94: 0x0  nop
    ctx->pc = 0x321f94u;
    // NOP
label_321f98:
    // 0x321f98: 0xaf84a5f8  sw          $a0, -0x5A08($gp)
    ctx->pc = 0x321f98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294944248), GPR_U32(ctx, 4));
label_321f9c:
    // 0x321f9c: 0x3e00008  jr          $ra
label_321fa0:
    if (ctx->pc == 0x321FA0u) {
        ctx->pc = 0x321FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321F9Cu;
        // 0x321fa0: 0xaf85a5fc  sw          $a1, -0x5A04($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294944252), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321FA4u;
        goto label_321fa4;
    }
    ctx->pc = 0x321F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321F9Cu;
        // 0x321fa0: 0xaf85a5fc  sw          $a1, -0x5A04($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294944252), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321FA4u;
label_321fa4:
    // 0x321fa4: 0x0  nop
    ctx->pc = 0x321fa4u;
    // NOP
    ctx->pc = 0x321fa8u;
}
