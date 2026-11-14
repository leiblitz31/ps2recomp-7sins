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

// Function: sub_00441258
// Address: 0x441258 - 0x441450
void sub_00441258_0x441258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00441258_0x441258");
#endif

    switch (ctx->pc) {
        case 0x4412d8u: goto label_4412d8;
        case 0x441334u: goto label_441334;
        case 0x44140cu: goto label_44140c;
        default: break;
    }

    ctx->pc = 0x441258u;

    // 0x441258: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x441258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x44125c: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x44125cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x441260: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x441260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x441264: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x441264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x441268: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x441268u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44126c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x44126cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x441270: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x441270u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x441274: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x441274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x441278: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x441278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x44127c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x44127cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x441280: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x441280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x441284: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x441284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x441288: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x441288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x44128c: 0x8f84beb8  lw          $a0, -0x4148($gp)
    ctx->pc = 0x44128cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
    // 0x441290: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x441290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x441294: 0x2a48821  addu        $s1, $s5, $a0
    ctx->pc = 0x441294u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x441298: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x441298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x44129c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x44129cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4412a0: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x4412a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x4412a4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x4412a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4412a8: 0x8ea30018  lw          $v1, 0x18($s5)
    ctx->pc = 0x4412a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x4412ac: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x4412acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4412b0: 0x8eb00004  lw          $s0, 0x4($s5)
    ctx->pc = 0x4412b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x4412b4: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x4412b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x4412b8: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x4412b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x4412bc: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x4412bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x4412c0: 0x14800030  bnez        $a0, . + 4 + (0x30 << 2)
    ctx->pc = 0x4412C0u;
    {
        const bool branch_taken_0x4412c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4412C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4412C0u;
        // 0x4412c4: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4412c0) {
            ctx->pc = 0x441384u;
            goto label_441384;
        }
    }
    ctx->pc = 0x4412C8u;
    // 0x4412c8: 0x3c1effff  lui         $fp, 0xFFFF
    ctx->pc = 0x4412c8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65535 << 16));
    // 0x4412cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4412ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4412d0: 0x37defff0  ori         $fp, $fp, 0xFFF0
    ctx->pc = 0x4412d0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)65520);
    // 0x4412d4: 0x2632003c  addiu       $s2, $s1, 0x3C
    ctx->pc = 0x4412d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
label_4412d8:
    // 0x4412d8: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x4412d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x4412dc: 0x3205000f  andi        $a1, $s0, 0xF
    ctx->pc = 0x4412dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x4412e0: 0x8ea40010  lw          $a0, 0x10($s5)
    ctx->pc = 0x4412e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x4412e4: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x4412e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x4412e8: 0x2e31807  srav        $v1, $v1, $s7
    ctx->pc = 0x4412e8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 23) & 0x1F));
    // 0x4412ec: 0x2e49807  srav        $s3, $a0, $s7
    ctx->pc = 0x4412ecu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 23) & 0x1F));
    // 0x4412f0: 0x14a00017  bnez        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x4412F0u;
    {
        const bool branch_taken_0x4412f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4412F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4412F0u;
        // 0x4412f4: 0x2e2b007  srav        $s6, $v0, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 23) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4412f0) {
            ctx->pc = 0x441350u;
            goto label_441350;
        }
    }
    ctx->pc = 0x4412F8u;
    // 0x4412f8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x4412f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4412fc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4412FCu;
    {
        const bool branch_taken_0x4412fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x441300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4412FCu;
        // 0x441300: 0x2d31018  mult        $v0, $s6, $s3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4412fc) {
            ctx->pc = 0x441354u;
            goto label_441354;
        }
    }
    ctx->pc = 0x441304u;
    // 0x441304: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x441304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x441308: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x441308u;
    {
        const bool branch_taken_0x441308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44130Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441308u;
        // 0x44130c: 0x2634003c  addiu       $s4, $s1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441308) {
            ctx->pc = 0x44133Cu;
            goto label_44133c;
        }
    }
    ctx->pc = 0x441310u;
    // 0x441310: 0x92220034  lbu         $v0, 0x34($s1)
    ctx->pc = 0x441310u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x441314: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x441314u;
    {
        const bool branch_taken_0x441314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x441318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441314u;
        // 0x441318: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441314) {
            ctx->pc = 0x441348u;
            goto label_441348;
        }
    }
    ctx->pc = 0x44131Cu;
    // 0x44131c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x44131cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x441320: 0x7fa90010  sq          $t1, 0x10($sp)
    ctx->pc = 0x441320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 9));
    // 0x441324: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x441324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x441328: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x441328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44132c: 0xc1103f8  jal         func_440FE0
    ctx->pc = 0x44132Cu;
    SET_GPR_U32(ctx, 31, 0x441334u);
    ctx->pc = 0x441330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44132Cu;
    // 0x441330: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x440FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x440FE0u, 0x44132Cu, 0x441334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x441334u;
label_441334:
    // 0x441334: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x441334u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x441338: 0x7ba90010  lq          $t1, 0x10($sp)
    ctx->pc = 0x441338u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44133c:
    // 0x44133c: 0x92220034  lbu         $v0, 0x34($s1)
    ctx->pc = 0x44133cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x441340: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x441340u;
    {
        const bool branch_taken_0x441340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x441344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441340u;
        // 0x441344: 0x2d31018  mult        $v0, $s6, $s3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x441340) {
            ctx->pc = 0x441354u;
            goto label_441354;
        }
    }
    ctx->pc = 0x441348u;
label_441348:
    // 0x441348: 0x2891021  addu        $v0, $s4, $t1
    ctx->pc = 0x441348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 9)));
    // 0x44134c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x44134cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_441350:
    // 0x441350: 0x2d31018  mult        $v0, $s6, $s3
    ctx->pc = 0x441350u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_441354:
    // 0x441354: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x441354u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x441358: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x441358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x44135c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x44135Cu;
    {
        const bool branch_taken_0x44135c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x441360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44135Cu;
        // 0x441360: 0x2602000f  addiu       $v0, $s0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44135c) {
            ctx->pc = 0x441368u;
            goto label_441368;
        }
    }
    ctx->pc = 0x441364u;
    // 0x441364: 0x5e8024  and         $s0, $v0, $fp
    ctx->pc = 0x441364u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
label_441368:
    // 0x441368: 0x92220016  lbu         $v0, 0x16($s1)
    ctx->pc = 0x441368u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x44136c: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x44136cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x441370: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x441370u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x441374: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x441374u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x441378: 0x57102a  slt         $v0, $v0, $s7
    ctx->pc = 0x441378u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x44137c: 0x1040ffd6  beqz        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x44137Cu;
    {
        const bool branch_taken_0x44137c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x441380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44137Cu;
        // 0x441380: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44137c) {
            ctx->pc = 0x4412D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4412d8;
        }
    }
    ctx->pc = 0x441384u;
label_441384:
    // 0x441384: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x441384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x441388: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x441388u;
    {
        const bool branch_taken_0x441388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x441388) {
            ctx->pc = 0x44138Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x441388u;
            // 0x44138c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x441424u;
            goto label_441424;
        }
    }
    ctx->pc = 0x441390u;
    // 0x441390: 0x8ea30014  lw          $v1, 0x14($s5)
    ctx->pc = 0x441390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x441394: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x441394u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x441398: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x441398u;
    {
        const bool branch_taken_0x441398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441398u;
        // 0x44139c: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441398) {
            ctx->pc = 0x441420u;
            goto label_441420;
        }
    }
    ctx->pc = 0x4413A0u;
    // 0x4413a0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x4413a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x4413a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4413a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4413a8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x4413a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x4413ac: 0x244216a0  addiu       $v0, $v0, 0x16A0
    ctx->pc = 0x4413acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5792));
    // 0x4413b0: 0x24841680  addiu       $a0, $a0, 0x1680
    ctx->pc = 0x4413b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5760));
    // 0x4413b4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4413b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4413b8: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x4413b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4413bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4413bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4413c0: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x4413c0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4413c4: 0x52cc2  srl         $a1, $a1, 19
    ctx->pc = 0x4413c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 19));
    // 0x4413c8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4413c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4413cc: 0x30a5000f  andi        $a1, $a1, 0xF
    ctx->pc = 0x4413ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x4413d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4413d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4413d4: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4413D4u;
    {
        const bool branch_taken_0x4413d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4413D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4413D4u;
        // 0x4413d8: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4413d4) {
            ctx->pc = 0x4413ECu;
            goto label_4413ec;
        }
    }
    ctx->pc = 0x4413DCu;
    // 0x4413dc: 0x2ca20003  sltiu       $v0, $a1, 0x3
    ctx->pc = 0x4413dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x4413e0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4413E0u;
    {
        const bool branch_taken_0x4413e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4413E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4413E0u;
        // 0x4413e4: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4413e0) {
            ctx->pc = 0x4413ECu;
            goto label_4413ec;
        }
    }
    ctx->pc = 0x4413E8u;
    // 0x4413e8: 0x45380a  movz        $a3, $v0, $a1
    ctx->pc = 0x4413e8u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
label_4413ec:
    // 0x4413ec: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x4413ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x4413f0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4413F0u;
    {
        const bool branch_taken_0x4413f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4413F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4413F0u;
        // 0x4413f4: 0x92220034  lbu         $v0, 0x34($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4413f0) {
            ctx->pc = 0x441414u;
            goto label_441414;
        }
    }
    ctx->pc = 0x4413F8u;
    // 0x4413f8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4413F8u;
    {
        const bool branch_taken_0x4413f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4413FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4413F8u;
        // 0x4413fc: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4413f8) {
            ctx->pc = 0x44141Cu;
            goto label_44141c;
        }
    }
    ctx->pc = 0x441400u;
    // 0x441400: 0x8ea60008  lw          $a2, 0x8($s5)
    ctx->pc = 0x441400u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x441404: 0xc1103f8  jal         func_440FE0
    ctx->pc = 0x441404u;
    SET_GPR_U32(ctx, 31, 0x44140Cu);
    ctx->pc = 0x441408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x441404u;
    // 0x441408: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x440FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x440FE0u, 0x441404u, 0x44140Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44140Cu;
label_44140c:
    // 0x44140c: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x44140cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
    // 0x441410: 0x92220034  lbu         $v0, 0x34($s1)
    ctx->pc = 0x441410u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
label_441414:
    // 0x441414: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x441414u;
    {
        const bool branch_taken_0x441414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x441418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441414u;
        // 0x441418: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441414) {
            ctx->pc = 0x441424u;
            goto label_441424;
        }
    }
    ctx->pc = 0x44141Cu;
label_44141c:
    // 0x44141c: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x44141cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
label_441420:
    // 0x441420: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x441420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_441424:
    // 0x441424: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x441424u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x441428: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x441428u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x44142c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x44142cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x441430: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x441430u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x441434: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x441434u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x441438: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x441438u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x44143c: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x44143cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x441440: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x441440u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x441444: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x441444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x441448: 0x3e00008  jr          $ra
    ctx->pc = 0x441448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44144Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441448u;
        // 0x44144c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x441448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x441450u;
}
