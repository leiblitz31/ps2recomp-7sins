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

// Function: sub_003511B0
// Address: 0x3511b0 - 0x351490
void sub_003511B0_0x3511b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003511B0_0x3511b0");
#endif

    switch (ctx->pc) {
        case 0x3513a0u: goto label_3513a0;
        default: break;
    }

    ctx->pc = 0x3511b0u;

    // 0x3511b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3511b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3511b4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3511b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3511b8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3511b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x3511bc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3511bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3511c0: 0x3c083000  lui         $t0, 0x3000
    ctx->pc = 0x3511c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)12288 << 16));
    // 0x3511c4: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x3511c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x3511c8: 0x35080100  ori         $t0, $t0, 0x100
    ctx->pc = 0x3511c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)256);
    // 0x3511cc: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x3511ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x3511d0: 0x35080101  ori         $t0, $t0, 0x101
    ctx->pc = 0x3511d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)257);
    // 0x3511d4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3511d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x3511d8: 0x71024389  pcpyld      $t0, $t0, $v0
    ctx->pc = 0x3511d8u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
    // 0x3511dc: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3511dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3511e0: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x3511e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x3511e4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3511e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3511e8: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x3511e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3511ec: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3511ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x3511f0: 0x3c090400  lui         $t1, 0x400
    ctx->pc = 0x3511f0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)1024 << 16));
    // 0x3511f4: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3511f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x3511f8: 0x3c064b00  lui         $a2, 0x4B00
    ctx->pc = 0x3511f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)19200 << 16));
    // 0x3511fc: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x3511fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x351200: 0x34c64b00  ori         $a2, $a2, 0x4B00
    ctx->pc = 0x351200u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)19200);
    // 0x351204: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x351204u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x351208: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x351208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x35120c: 0x70c63389  pcpyld      $a2, $a2, $a2
    ctx->pc = 0x35120cu;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 6)));
    // 0x351210: 0x7fb70000  sq          $s7, 0x0($sp)
    ctx->pc = 0x351210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 23));
    // 0x351214: 0x34078800  ori         $a3, $zero, 0x8800
    ctx->pc = 0x351214u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34816);
    // 0x351218: 0x73b7c  dsll32      $a3, $a3, 13
    ctx->pc = 0x351218u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 13));
    // 0x35121c: 0x8c970124  lw          $s7, 0x124($a0)
    ctx->pc = 0x35121cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x351220: 0x3c0b1000  lui         $t3, 0x1000
    ctx->pc = 0x351220u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4096 << 16));
    // 0x351224: 0x8c8300fc  lw          $v1, 0xFC($a0)
    ctx->pc = 0x351224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 252)));
    // 0x351228: 0x340ca000  ori         $t4, $zero, 0xA000
    ctx->pc = 0x351228u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x35122c: 0xc637c  dsll32      $t4, $t4, 13
    ctx->pc = 0x35122cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 13));
    // 0x351230: 0x8cad0004  lw          $t5, 0x4($a1)
    ctx->pc = 0x351230u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x351234: 0x340ab800  ori         $t2, $zero, 0xB800
    ctx->pc = 0x351234u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)47104);
    // 0x351238: 0xa537c  dsll32      $t2, $t2, 13
    ctx->pc = 0x351238u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 13));
    // 0x35123c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x35123cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x351240: 0x8c710018  lw          $s1, 0x18($v1)
    ctx->pc = 0x351240u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x351244: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x351244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x351248: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x351248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x35124c: 0x78900040  lq          $s0, 0x40($a0)
    ctx->pc = 0x35124cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x351250: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x351250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x351254: 0x78990050  lq          $t9, 0x50($a0)
    ctx->pc = 0x351254u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x351258: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x351258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x35125c: 0x78980060  lq          $t8, 0x60($a0)
    ctx->pc = 0x35125cu;
    SET_GPR_VEC(ctx, 24, READ128(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x351260: 0x70e23b89  pcpyld      $a3, $a3, $v0
    ctx->pc = 0x351260u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 2)));
    // 0x351264: 0x788f0070  lq          $t7, 0x70($a0)
    ctx->pc = 0x351264u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x351268: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x351268u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x35126c: 0x788e0080  lq          $t6, 0x80($a0)
    ctx->pc = 0x35126cu;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x351270: 0x7da80000  sq          $t0, 0x0($t5)
    ctx->pc = 0x351270u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 0), GPR_VEC(ctx, 8));
    // 0x351274: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x351274u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x351278: 0x8c820128  lw          $v0, 0x128($a0)
    ctx->pc = 0x351278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 296)));
    // 0x35127c: 0x7da60000  sq          $a2, 0x0($t5)
    ctx->pc = 0x35127cu;
    WRITE128(ADD32(GPR_U32(ctx, 13), 0), GPR_VEC(ctx, 6));
    // 0x351280: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x351280u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x351284: 0x2e21018  mult        $v0, $s7, $v0
    ctx->pc = 0x351284u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x351288: 0x7da70000  sq          $a3, 0x0($t5)
    ctx->pc = 0x351288u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 0), GPR_VEC(ctx, 7));
    // 0x35128c: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x35128cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x351290: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x351290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x351294: 0x7db00000  sq          $s0, 0x0($t5)
    ctx->pc = 0x351294u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 0), GPR_VEC(ctx, 16));
    // 0x351298: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x351298u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x35129c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x35129cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3512a0: 0x7db90000  sq          $t9, 0x0($t5)
    ctx->pc = 0x3512a0u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 0), GPR_VEC(ctx, 25));
    // 0x3512a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3512a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3512a8: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x3512a8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x3512ac: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x3512acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x3512b0: 0x7db80000  sq          $t8, 0x0($t5)
    ctx->pc = 0x3512b0u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 0), GPR_VEC(ctx, 24));
    // 0x3512b4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3512b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3512b8: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x3512b8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x3512bc: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x3512bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x3512c0: 0x7daf0000  sq          $t7, 0x0($t5)
    ctx->pc = 0x3512c0u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 0), GPR_VEC(ctx, 15));
    // 0x3512c4: 0x71432b89  pcpyld      $a1, $t2, $v1
    ctx->pc = 0x3512c4u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 3)));
    // 0x3512c8: 0xdc960090  ld          $s6, 0x90($a0)
    ctx->pc = 0x3512c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x3512cc: 0x71831389  pcpyld      $v0, $t4, $v1
    ctx->pc = 0x3512ccu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 3)));
    // 0x3512d0: 0xdc950098  ld          $s5, 0x98($a0)
    ctx->pc = 0x3512d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x3512d4: 0x216802d  daddu       $s0, $s0, $s6
    ctx->pc = 0x3512d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 22));
    // 0x3512d8: 0xdc9400a0  ld          $s4, 0xA0($a0)
    ctx->pc = 0x3512d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x3512dc: 0x335c82d  daddu       $t9, $t9, $s5
    ctx->pc = 0x3512dcu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 21));
    // 0x3512e0: 0xdc9300a8  ld          $s3, 0xA8($a0)
    ctx->pc = 0x3512e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x3512e4: 0x314c02d  daddu       $t8, $t8, $s4
    ctx->pc = 0x3512e4u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 20));
    // 0x3512e8: 0xdc9200b0  ld          $s2, 0xB0($a0)
    ctx->pc = 0x3512e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x3512ec: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x3512ecu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x3512f0: 0x1f3782d  daddu       $t7, $t7, $s3
    ctx->pc = 0x3512f0u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 19));
    // 0x3512f4: 0x56290005  bnel        $s1, $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3512F4u;
    {
        const bool branch_taken_0x3512f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 9));
        if (branch_taken_0x3512f4) {
            ctx->pc = 0x3512F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3512F4u;
            // 0x3512f8: 0x7da20000  sq          $v0, 0x0($t5) (Delay Slot)
            WRITE128(ADD32(GPR_U32(ctx, 13), 0), GPR_VEC(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35130Cu;
            goto label_35130c;
        }
    }
    ctx->pc = 0x3512FCu;
    // 0x3512fc: 0x7dae0000  sq          $t6, 0x0($t5)
    ctx->pc = 0x3512fcu;
    WRITE128(ADD32(GPR_U32(ctx, 13), 0), GPR_VEC(ctx, 14));
    // 0x351300: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x351300u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x351304: 0x1d2702d  daddu       $t6, $t6, $s2
    ctx->pc = 0x351304u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 18));
    // 0x351308: 0x7da20000  sq          $v0, 0x0($t5)
    ctx->pc = 0x351308u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 0), GPR_VEC(ctx, 2));
label_35130c:
    // 0x35130c: 0x26e4fffe  addiu       $a0, $s7, -0x2
    ctx->pc = 0x35130cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967294));
    // 0x351310: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x351310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x351314: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x351314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x351318: 0x1082004e  beq         $a0, $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x351318u;
    {
        const bool branch_taken_0x351318 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x35131Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351318u;
        // 0x35131c: 0x25ad0010  addiu       $t5, $t5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351318) {
            ctx->pc = 0x351454u;
            goto label_351454;
        }
    }
    ctx->pc = 0x351320u;
    // 0x351320: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x351320u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x351324: 0x41027  nor         $v0, $zero, $a0
    ctx->pc = 0x351324u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x351328: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x351328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x35132c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x35132cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x351330: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x351330u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x351334: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x351334u;
    {
        const bool branch_taken_0x351334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351334u;
        // 0x351338: 0x1a0182d  daddu       $v1, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351334) {
            ctx->pc = 0x3513A0u;
            goto label_3513a0;
        }
    }
    ctx->pc = 0x35133Cu;
    // 0x35133c: 0x7db00000  sq          $s0, 0x0($t5)
    ctx->pc = 0x35133cu;
    WRITE128(ADD32(GPR_U32(ctx, 13), 0), GPR_VEC(ctx, 16));
    // 0x351340: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x351340u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x351344: 0x216802d  daddu       $s0, $s0, $s6
    ctx->pc = 0x351344u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 22));
    // 0x351348: 0x7db90000  sq          $t9, 0x0($t5)
    ctx->pc = 0x351348u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 0), GPR_VEC(ctx, 25));
    // 0x35134c: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x35134cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x351350: 0x335c82d  daddu       $t9, $t9, $s5
    ctx->pc = 0x351350u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 21));
    // 0x351354: 0x7db80000  sq          $t8, 0x0($t5)
    ctx->pc = 0x351354u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 0), GPR_VEC(ctx, 24));
    // 0x351358: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x351358u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x35135c: 0x314c02d  daddu       $t8, $t8, $s4
    ctx->pc = 0x35135cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 20));
    // 0x351360: 0x25a20010  addiu       $v0, $t5, 0x10
    ctx->pc = 0x351360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x351364: 0x7daf0000  sq          $t7, 0x0($t5)
    ctx->pc = 0x351364u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 0), GPR_VEC(ctx, 15));
    // 0x351368: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x351368u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35136c: 0x1f3782d  daddu       $t7, $t7, $s3
    ctx->pc = 0x35136cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 19));
    // 0x351370: 0x16270006  bne         $s1, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x351370u;
    {
        const bool branch_taken_0x351370 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 7));
        ctx->pc = 0x351374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351370u;
        // 0x351374: 0x60682d  daddu       $t5, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351370) {
            ctx->pc = 0x35138Cu;
            goto label_35138c;
        }
    }
    ctx->pc = 0x351378u;
    // 0x351378: 0x25a20010  addiu       $v0, $t5, 0x10
    ctx->pc = 0x351378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x35137c: 0x7dae0000  sq          $t6, 0x0($t5)
    ctx->pc = 0x35137cu;
    WRITE128(ADD32(GPR_U32(ctx, 13), 0), GPR_VEC(ctx, 14));
    // 0x351380: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x351380u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351384: 0x1d2702d  daddu       $t6, $t6, $s2
    ctx->pc = 0x351384u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 18));
    // 0x351388: 0x60682d  daddu       $t5, $v1, $zero
    ctx->pc = 0x351388u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_35138c:
    // 0x35138c: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x35138cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x351390: 0x26e4fffd  addiu       $a0, $s7, -0x3
    ctx->pc = 0x351390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967293));
    // 0x351394: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x351394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x351398: 0x1086002e  beq         $a0, $a2, . + 4 + (0x2E << 2)
    ctx->pc = 0x351398u;
    {
        const bool branch_taken_0x351398 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x35139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351398u;
        // 0x35139c: 0x25ad0010  addiu       $t5, $t5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351398) {
            ctx->pc = 0x351454u;
            goto label_351454;
        }
    }
    ctx->pc = 0x3513A0u;
label_3513a0:
    // 0x3513a0: 0x7c700000  sq          $s0, 0x0($v1)
    ctx->pc = 0x3513a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 16));
    // 0x3513a4: 0x25ad0040  addiu       $t5, $t5, 0x40
    ctx->pc = 0x3513a4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 64));
    // 0x3513a8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3513a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3513ac: 0x216802d  daddu       $s0, $s0, $s6
    ctx->pc = 0x3513acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 22));
    // 0x3513b0: 0x7c790000  sq          $t9, 0x0($v1)
    ctx->pc = 0x3513b0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 25));
    // 0x3513b4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3513b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3513b8: 0x335c82d  daddu       $t9, $t9, $s5
    ctx->pc = 0x3513b8u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 21));
    // 0x3513bc: 0x7c780000  sq          $t8, 0x0($v1)
    ctx->pc = 0x3513bcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 24));
    // 0x3513c0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3513c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3513c4: 0x314c02d  daddu       $t8, $t8, $s4
    ctx->pc = 0x3513c4u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 20));
    // 0x3513c8: 0x7c6f0000  sq          $t7, 0x0($v1)
    ctx->pc = 0x3513c8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 15));
    // 0x3513cc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3513ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3513d0: 0x1f3782d  daddu       $t7, $t7, $s3
    ctx->pc = 0x3513d0u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 19));
    // 0x3513d4: 0x56270006  bnel        $s1, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x3513D4u;
    {
        const bool branch_taken_0x3513d4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 7));
        if (branch_taken_0x3513d4) {
            ctx->pc = 0x3513D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3513D4u;
            // 0x3513d8: 0x7c650000  sq          $a1, 0x0($v1) (Delay Slot)
            WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3513F0u;
            goto label_3513f0;
        }
    }
    ctx->pc = 0x3513DCu;
    // 0x3513dc: 0x7c6e0000  sq          $t6, 0x0($v1)
    ctx->pc = 0x3513dcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 14));
    // 0x3513e0: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x3513e0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x3513e4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3513e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3513e8: 0x1d2702d  daddu       $t6, $t6, $s2
    ctx->pc = 0x3513e8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 18));
    // 0x3513ec: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x3513ecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
label_3513f0:
    // 0x3513f0: 0x25ad0050  addiu       $t5, $t5, 0x50
    ctx->pc = 0x3513f0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 80));
    // 0x3513f4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3513f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3513f8: 0x7c700000  sq          $s0, 0x0($v1)
    ctx->pc = 0x3513f8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 16));
    // 0x3513fc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3513fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x351400: 0x216802d  daddu       $s0, $s0, $s6
    ctx->pc = 0x351400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 22));
    // 0x351404: 0x7c790000  sq          $t9, 0x0($v1)
    ctx->pc = 0x351404u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 25));
    // 0x351408: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x351408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x35140c: 0x335c82d  daddu       $t9, $t9, $s5
    ctx->pc = 0x35140cu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 21));
    // 0x351410: 0x7c780000  sq          $t8, 0x0($v1)
    ctx->pc = 0x351410u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 24));
    // 0x351414: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x351414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x351418: 0x314c02d  daddu       $t8, $t8, $s4
    ctx->pc = 0x351418u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 20));
    // 0x35141c: 0x7c6f0000  sq          $t7, 0x0($v1)
    ctx->pc = 0x35141cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 15));
    // 0x351420: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x351420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x351424: 0x1f3782d  daddu       $t7, $t7, $s3
    ctx->pc = 0x351424u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 19));
    // 0x351428: 0x56270006  bnel        $s1, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x351428u;
    {
        const bool branch_taken_0x351428 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 7));
        if (branch_taken_0x351428) {
            ctx->pc = 0x35142Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351428u;
            // 0x35142c: 0x7c650000  sq          $a1, 0x0($v1) (Delay Slot)
            WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351444u;
            goto label_351444;
        }
    }
    ctx->pc = 0x351430u;
    // 0x351430: 0x7c6e0000  sq          $t6, 0x0($v1)
    ctx->pc = 0x351430u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 14));
    // 0x351434: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x351434u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x351438: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x351438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x35143c: 0x1d2702d  daddu       $t6, $t6, $s2
    ctx->pc = 0x35143cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 18));
    // 0x351440: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x351440u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
label_351444:
    // 0x351444: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x351444u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x351448: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x351448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x35144c: 0x1486ffd4  bne         $a0, $a2, . + 4 + (-0x2C << 2)
    ctx->pc = 0x35144Cu;
    {
        const bool branch_taken_0x35144c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x351450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35144Cu;
        // 0x351450: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35144c) {
            ctx->pc = 0x3513A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3513a0;
        }
    }
    ctx->pc = 0x351454u;
label_351454:
    // 0x351454: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x351454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
    // 0x351458: 0x34028800  ori         $v0, $zero, 0x8800
    ctx->pc = 0x351458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34816);
    // 0x35145c: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x35145cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x351460: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x351460u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x351464: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x351464u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x351468: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x351468u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x35146c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x35146cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x351470: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x351470u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x351474: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x351474u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x351478: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x351478u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35147c: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x35147cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x351480: 0x7bb70000  lq          $s7, 0x0($sp)
    ctx->pc = 0x351480u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x351484: 0x7da20000  sq          $v0, 0x0($t5)
    ctx->pc = 0x351484u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 0), GPR_VEC(ctx, 2));
    // 0x351488: 0x3e00008  jr          $ra
    ctx->pc = 0x351488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351488u;
        // 0x35148c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351490u;
}
